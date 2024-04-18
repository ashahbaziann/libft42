/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:23:57 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/02/06 17:51:36 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;

	if (!del || !lst)
		return ;
	while (lst && *lst)
	{
		curr = (*lst)-> next;
		del ((*lst)-> content);
		free(*lst);
		*lst = curr;
	}
	lst = NULL;
}
