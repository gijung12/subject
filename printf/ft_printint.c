/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:31:59 by yourintrana       #+#    #+#             */
/*   Updated: 2024/04/10 16:52:44 by yourintrana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printint(int j)
{
	int	count;

	ft_putnbr_fd (j, 1);
	count = 0;
	if (j <= 0)
		count = 1;
	while (j != 0)
	{
		j = j / 10;
		count++;
	}
	return (count);
}
