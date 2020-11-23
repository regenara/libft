/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 14:16:23 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/07 18:29:01 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dest == NULL || src == NULL)
		return (0);
	while (size > i)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
	if (size == i)
		dest[i - 1] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
