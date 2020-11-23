/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:39:59 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/10 12:02:53 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	s_strlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static int		s_freedom(char **sp, int i)
{
	while (i >= 0)
	{
		free(sp[i]);
		i--;
	}
	free(sp);
	return (-1);
}

static int		s_counter(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0' && *s != c)
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

static	int		s_filler(char **sp, char const *s, char c, int sp_i)
{
	char	*str;
	size_t	i;
	size_t	str_i;

	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			str = (char*)malloc(sizeof(char) * (s_strlen(s + i, c) + 1));
			if (NULL == str)
				return (s_freedom(sp, sp_i));
			str_i = 0;
			while (s[i] != '\0' && s[i] != c)
				str[str_i++] = s[i++];
			str[str_i] = '\0';
			sp[sp_i] = str;
			sp_i++;
		}
	}
	sp[sp_i] = NULL;
	return (0);
}

char			**ft_split(char const *s, char c)
{
	char	**sp;
	int		sp_i;

	if (NULL == s)
		return (NULL);
	sp = (char**)malloc(sizeof(char *) * (s_counter(s, c) + 1));
	if (NULL == sp)
		return (NULL);
	sp_i = s_filler(sp, s, c, 0);
	if (sp_i == -1)
		return (NULL);
	return (sp);
}
