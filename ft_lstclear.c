/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 03:19:51 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/08 03:52:36 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*begin;
	t_list	*tmp;

	begin = *lst;
	while (begin)
	{
		tmp = begin->next;
		del(begin->content);
		free(begin);
		begin = tmp;
	}
	*lst = NULL;
}
