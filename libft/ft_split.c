/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <gijung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:17:39 by gijung            #+#    #+#             */
/*   Updated: 2024/03/22 19:06:47 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

static int	str_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

static void	free_split(int j, char **string)
{
	while (j > 0)
	{
		free(*(string + j));
		j--;
	}
	free(string);
}

static char	**assit_split(char const *s, char c, char **string, int word)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < word)
	{
		while (*(s + i) != '\0' && *(s + i) == c)
			i++;
		string[j] = ft_substr(s, i, str_len(&*(s + i), c));
		if (!string[j])
		{
			free_split(j + 1, string);
			return (NULL);
		}
		while (*(s + i) != '\0' && *(s + i) != c)
			i++;
		j++;
	}
	*(string + j) = NULL;
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char	**string;
	int		word;

	if (!s)
		return (NULL);
	word = count_word(s, c);
	string = (char **)malloc(sizeof(char *) * (word + 1));
	if (!string)
		return (NULL);
	string = assit_split(s, c, string, word);
	return (string);
}
