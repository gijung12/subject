/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <gijung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:17:05 by gijung            #+#    #+#             */
/*   Updated: 2024/03/20 19:53:49 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (--size && *src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (i);
}
