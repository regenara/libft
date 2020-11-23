/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 05:28:36 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/10 10:53:06 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
		len++;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (NULL == str)
		return (NULL);
	i = 0;
	str[len] = '\0';
	while (i < len)
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	return (str);
}
