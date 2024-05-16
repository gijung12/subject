/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <gijung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:11:12 by gijung            #+#    #+#             */
/*   Updated: 2024/03/21 18:55:10 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	len;

	if ((!dst || !src) && !size)
		return (0);
	len = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen((char *)src);
	if (dlen > size)
		return (slen + size);
	while (*dst)
	{
		dst++;
		len++;
	}
	while (*src && (len++) + 1 < size)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (slen + dlen);
}
