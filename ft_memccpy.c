/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:55:19 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/10 02:02:53 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (n > i)
	{
		*(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
		if (*(unsigned char*)(src + i) == (unsigned char)c)
			return ((dest + i + 1));
		i++;
	}
	return (NULL);
}
