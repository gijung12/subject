/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <gijung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:57:15 by gijung            #+#    #+#             */
/*   Updated: 2024/03/20 23:09:28 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	dest = (char *)malloc(sizeof(char) * (len +1));
	if (!dest)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	while (s[start] != '\0' && len > 0)
	{
		dest[i] = s[start];
		start++;
		i++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}
