/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:54:53 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/02 03:44:36 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void *ptr;

	ptr = dest;
	while (n-- > 0 && dest != src)
		*(char*)dest++ = *(char*)src++;
	return (ptr);
}
