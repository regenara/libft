/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 01:20:59 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/08 02:53:49 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lst;

	lst = (t_list*)malloc(sizeof(t_list));
	if (lst)
	{
		lst->content = content;
		lst->next = NULL;
	}
	return (lst);
}
