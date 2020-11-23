/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:11:12 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/05 04:03:42 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	numlen(long int n)
{
	if (n < 10)
		return (1);
	return (1 + numlen(n / 10));
}

static void		filler(long int n, size_t len, char *num)
{
	num[len] = n % 10 + '0';
	if (n >= 10)
		filler(n / 10, len - 1, num);
}

char			*ft_itoa(int n)
{
	int			negative;
	int			len;
	long int	d;
	char		*num;

	d = n;
	negative = 0;
	if (d < 0)
	{
		negative = 1;
		d = d * -1;
	}
	len = (int)numlen(d) + negative;
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (NULL == num)
		return (NULL);
	if (negative)
		num[0] = '-';
	num[len] = '\0';
	filler(d, len - 1, num);
	return (num);
}
