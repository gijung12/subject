/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <gijung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 00:33:30 by gijung            #+#    #+#             */
/*   Updated: 2024/03/22 18:20:08 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_posit(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*execept(int n, char *dest, int posit)
{
	*(dest + posit - 1) = 56;
	posit--;
	n = 214748364;
	while (posit--)
	{
		*(dest + posit) = n % 10 + 48;
		n = n / 10;
	}
	*dest = 45;
	return ((char *)dest);
}

static int	change_minus(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

char	*ft_itoa(int n)
{
	int		posit;
	int		sign;
	char	*dest;

	sign = 0;
	if (n < 0)
		sign = 1;
	posit = count_posit(n);
	dest = (char *)malloc(sizeof(char) * (posit + 1));
	if (!dest)
		return (NULL);
	dest[posit] = '\0';
	if (n == -2147483648)
		return (execept(n, dest, posit));
	n = change_minus(n);
	while (posit--)
	{
		*(dest + posit) = n % 10 + 48;
		n = n / 10;
	}
	if (sign == 1)
		*dest = 45;
	return ((char *)dest);
}
