/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:09:49 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/08 05:27:30 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** я не буду обрабатывать > long long & < -long long, потому что я пишу atoi,
** а не strtol
** Про atoi
** http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1124.pdf стр 319
** Статья по теме
** https://github.com/Danilo3/intra_forum/blob/master/libft/atoi.md
*/

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int p;

	i = 0;
	n = 0;
	p = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			p = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (n * p);
}
