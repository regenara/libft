/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:11:57 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/07 17:23:12 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		s_isset(char const c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int		s_strlen(char const *s1, int i)
{
	while (s1[i] != '\0')
		i++;
	return (i);
}

static int		s_find_ends(char const *s1, char const *set, int reverse)
{
	int i;

	i = 0;
	if (reverse)
		i = s_strlen(s1, i) - 1;
	while (s_isset(s1[i], set))
	{
		if (reverse)
			i--;
		else
			i++;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	int		len;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = s_find_ends(s1, set, 0);
	end = s_find_ends(s1, set, 1);
	len = end - start + 1;
	if (!(start) && !(end))
		len = s_strlen(s1, 0);
	str = (char *)malloc(len > 0 ?
			sizeof(char) * (len + 1) : sizeof(char) * 1);
	if (NULL == str)
		return (NULL);
	i = 0;
	while (len-- > 0)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
