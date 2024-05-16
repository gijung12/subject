/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:33:35 by yourintrana       #+#    #+#             */
/*   Updated: 2024/04/10 17:06:46 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printhex(unsigned long long adres, int count)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	count = 0;
	if (adres > 15)
	{
		count += printhex(adres / 16, count);
		count += printhex(adres % 16, count);
	}
	else
	{
		write (1, hex_base + adres, 1);
		count++;
	}
	return (count);
}

int	ft_printaddress(void *adres)
{
	int	count;

	count = 0;
	if ((unsigned long long) adres == 0)
	{
		write (1, "(nil)", 5);
		return (count + 5);
	}
	write (1, "0x", 2);
	return (printhex ((unsigned long long)adres, count) + 2);
}
