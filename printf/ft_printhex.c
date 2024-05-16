/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:15:20 by yourintrana       #+#    #+#             */
/*   Updated: 2024/04/10 17:17:37 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printhex(unsigned int n, char a)
{
	char	*hex_base;
	int		count;

	count = 0;
	if (a == 'x')
		hex_base = "0123456789abcdef";
	else
		hex_base = "0123456789ABCDEF";
	if (n > 15)
	{
		count += ft_printhex(n / 16, a);
		count += ft_printhex(n % 16, a);
	}
	else
	{
		write (1, hex_base + n, 1);
		count++;
	}
	return (count);
}
