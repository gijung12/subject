/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:49:44 by yourintrana       #+#    #+#             */
/*   Updated: 2024/04/10 17:15:14 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	check_point(const char *standard, char c)
{
	int	i;

	i = 0;
	while (standard[i] != '\0')
	{
		if (standard[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_execute(va_list argptr, char a)
{
	int	count;

	count = 0;
	if (a == 'c')
		return (ft_printchar((va_arg(argptr, int))));
	if (a == 's')
		return (ft_printstr(va_arg(argptr, char *)));
	if (a == 'p')
		return (ft_printaddress(va_arg(argptr, void *)));
	if (a == 'd' || a == 'i')
		return (ft_printint(va_arg(argptr, int)));
	if (a == 'u')
		return (ft_unsignnbr(va_arg(argptr, unsigned int)));
	if (a == 'x' || a == 'X')
		return (ft_printhex(va_arg(argptr, unsigned int), a));
	if (a == '%')
		return (ft_printchar('%'));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	argptr;
	char	*standard;

	standard = "cspdiuxX%";
	va_start(argptr, format);
	i = 0;
	count = 0;
	while (*(format + i))
	{
		if (*(format + i) == '%' && check_point(standard, *(format + i + 1)))
		{
			count = count + ft_execute(argptr, *(format + i + 1));
			i++;
		}
		else
			count = count + ft_printchar(*(format + i));
		i++;
	}
	va_end (argptr);
	return (count);
}
