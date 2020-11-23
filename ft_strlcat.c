/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 14:16:23 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/04 01:25:17 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	s_strlen(const char *str, size_t len)
{
	while (str[len] != '\0')
		len++;
	return (len);
}

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dest_size;
	size_t src_len;
	size_t dest_len;

	dest_size = s_strlen(dest, 0);
	src_len = 0;
	dest_len = dest_size;
	while (dest_size < size - 1 && src[src_len] != '\0' && size > 0)
	{
		dest[dest_size] = src[src_len];
		dest_size++;
		src_len++;
	}
	dest[dest_size] = '\0';
	src_len = s_strlen(src, src_len);
	return (size <= dest_len ? src_len + size : dest_len + src_len);
}
