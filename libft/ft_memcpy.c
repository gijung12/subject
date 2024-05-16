/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <gijung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:50:58 by gijung            #+#    #+#             */
/*   Updated: 2024/03/22 17:00:31 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*tmp;
	size_t		i;

	i = 0;
	s = src;
	tmp = dest;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*tmp++ = *s++;
		i++;
	}
	return (dest);
}
