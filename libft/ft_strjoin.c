/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <gijung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:36:48 by gijung            #+#    #+#             */
/*   Updated: 2024/03/21 17:55:33 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len_1;
	size_t		len_2;
	char		*dest;
	char		*return_dest;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (!dest)
		return (NULL);
	return_dest = dest;
	while (*s1 != '\0')
		*dest++ = *s1++;
	while (*s2 != '\0')
		*dest++ = *s2++;
	*dest = '\0';
	return (return_dest);
}
