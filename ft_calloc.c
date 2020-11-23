/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 00:02:35 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/03 19:12:34 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;
	size_t	i;

	i = 0;
	total = size * count;
	ptr = (void*)malloc(total);
	if (NULL == ptr)
		return (NULL);
	while (total > i)
	{
		*((char*)ptr + i) = 0;
		i++;
	}
	return (ptr);
}
