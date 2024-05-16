/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 01:48:07 by gijung            #+#    #+#             */
/*   Updated: 2024/05/14 19:50:54 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if(*s == (const char)c)
			return ((char *)s);
		s++;
	}
	if(*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int	s1_len;
	int	s2_len;
	char	*dest;
	char	*return_dest;

	if(!s1 || !s2)
		return (NULL)
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if(!dest)
		return (NULL);
	return_dest = dest;
	while(*s1)
		*dest++ = *s1++;
	while(*s2)
		*dest++ = *s2++;
	*dest = '\0';
	return (return_dest);
}

