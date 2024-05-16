/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:43:18 by gijung            #+#    #+#             */
/*   Updated: 2024/05/14 19:37:45 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	next_break(char *str)
{
	char	*ptr;

	ptr = str
	while(*ptr != '\n')
		ptr++;
	if(*ptr == '\n')
		ptr++;
	return (ptr - str);
}

char	*find_line_break(char *str)
{
	int	i;
	char	*return_line;

	i = 0;
	if(!str || *str == '\0')
		return (NULL);
	i = next_break(str);
	return_line = (char *)malloc(sizeof(char) * i + 1);
	if(!return_line)
		return(NULL);
	i = 0;
	while(*(str + i) && *(str + i) != '\n')
	{
		*(return_line + i) = *(str + i);
		i++;
	}
	*(return_line + i) = '\0';
	return (return_line);
}

char	*new_backup(char *str)
{
	char	*new_str;
	int	i;
	int	j;

	i = 0;
	j = 0;
	i = new_break(str);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(str) - i) + 1);
	if(!new_str)
		return(NULL);
	while(*(str + i))
	{
		*(new_str + j) = *(str + i);
		j++;
		i++;
	}
	*(new_str + j) = '\0';
	return (new_str);
}
	
char	*get_next_line(int fd)
{
	char		*read_content;
	size_t			read_byte;
	static char	*backup;

	read_bytes = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_content = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if(!read_content)
		return (NULL);
	while(!(ft_strchr(backup, '\n')) && read_byte != 0)
	{
		read_byte = read(fd, read_content, BUFFER_SIZE);
		if(read_byte == -1)
		{
			free(read_content);
			return (NULL);
		}
		backup = ft_strjoin(read_content. backup);
	}
	free(read_content);
	read_content = find_line_break(backup);
	backup = new_backup(backup);
	return (read_content);
}
