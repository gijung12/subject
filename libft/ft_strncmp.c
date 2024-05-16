/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <gijung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:15:18 by gijung            #+#    #+#             */
/*   Updated: 2024/03/22 17:24:34 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	if (size == 0)
		return (0);
	while (*str1 && *str2 && *str1 == *str2 && size > 1)
	{
		str1++;
		str2++;
		size--;
	}
	return ((unsigned char)(*str1) - (unsigned char)(*str2));
}
