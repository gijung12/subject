/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <gijung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:32:15 by gijung            #+#    #+#             */
/*   Updated: 2024/03/22 18:06:56 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_check(char const *s1, char const c)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] != '\0' && char_check(set, s1[start]))
		start++;
	while (s1[end] != '\0')
		end++;
	while ((end -1) > start && char_check(set, s1[end - 1]))
		end--;
	dest = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!dest)
		return (NULL);
	while (start < end)
		dest[i++] = s1[start++];
	dest[i] = '\0';
	return (dest);
}
