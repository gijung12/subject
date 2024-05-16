/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <gijung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:08:25 by gijung            #+#    #+#             */
/*   Updated: 2024/03/24 15:59:38 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (!size || !count)
		return (malloc(0));
	if (size > (size_t)(-1) / count)
		return (NULL);
	tmp = malloc(count * size);
	if (tmp == 0)
		return (NULL);
	ft_memset(tmp, 0, size * count);
	return (tmp);
}
