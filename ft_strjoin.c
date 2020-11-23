/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:11:57 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/17 13:16:07 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	s_strlen(char const *str, size_t len)
{
	while (str[len] != '\0')
		len++;
	return (len);
}

static char		*s_strlcpy(char *dest, char const *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ((char*)dest + i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*str;
	char	*tmp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = s_strlen(s1, 0);
	s2_len = s_strlen(s2, 0);
	str = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (NULL == str)
		return (NULL);
	tmp = s_strlcpy(str, s1, s1_len);
	s_strlcpy(tmp, s2, s2_len);
	return (str);
}
