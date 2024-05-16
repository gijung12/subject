/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:04:10 by yourintrana       #+#    #+#             */
/*   Updated: 2024/04/10 18:26:09 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_unsignnbr(unsigned int n)
{	
	char	*ten_base;
	int		count;

	ten_base = "0123456789";
	count = 0;
	if (n > 9)
	{
		count += ft_unsignnbr (n / 10);
		count += ft_unsignnbr (n % 10);
	}
	else
	{
		write (1, &ten_base[n], 1);
		count++;
	}
	return (count);
}
