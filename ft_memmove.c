/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:17:21 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/02 05:58:04 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (src < dest && (dest != NULL || src != NULL))
	{
		while (n-- > 0)
			*((char*)dest + n) = *((char*)src + n);
	}
	if (src >= dest && (dest != NULL || src != NULL))
	{
		while (n > i)
		{
			*((char*)dest + i) = *((char*)src + i);
			i++;
		}
	}
	return (dest);
}
