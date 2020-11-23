/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstoneho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 04:33:35 by mstoneho          #+#    #+#             */
/*   Updated: 2020/11/10 03:05:01 by mstoneho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char d;

	if (n < 0)
	{
		if (n <= -10)
			ft_putnbr_fd(n / 10, fd);
		else
			write(fd, "-", 1);
		d = n % 10 * -1 + '0';
		write(fd, &d, 1);
	}
	else
	{
		d = n % 10 + '0';
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		write(fd, &d, 1);
	}
}
