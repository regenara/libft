/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:41:34 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/07 17:21:46 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_l;
	char			*str;

	i = 0;
	s_l = 0;
	if (s == NULL)
		return (NULL);
	while (s[s_l] != '\0')
		s_l++;
	if (s_l <= start)
		start = s_l;
	if (len > s_l - start)
		len = s_l - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (NULL == str)
		return (NULL);
	while (len-- > 0 && s[start] != '\0')
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
