/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:11:47 by yourintrana       #+#    #+#             */
/*   Updated: 2024/04/10 17:23:45 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printchar(char c)
{
	int	i;

	i = 1;
	write (1, &c, 1);
	return (i);
}
