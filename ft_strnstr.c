/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:33:03 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/20 22:30:39 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	s_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static size_t	s_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_l;
	size_t	b_l;
	int		result;

	i = 0;
	l_l = s_strlen(little);
	b_l = s_strlen(big);
	if (!(l_l))
		return ((char*)big);
	while (i < len && len - i >= l_l)
	{
		if (big[i] == little[0])
		{
			result = s_strncmp(&big[i], little, l_l);
			if (result == 0)
				return ((char*)big + i);
		}
		i++;
	}
	return (NULL);
}
