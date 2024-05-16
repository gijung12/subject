/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gijung <gijung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:01:54 by gijung            #+#    #+#             */
/*   Updated: 2024/03/21 01:29:26 by gijung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*scan;

	if (lst)
	{
		while (*lst)
		{
			scan = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = scan;
		}
	}
}
