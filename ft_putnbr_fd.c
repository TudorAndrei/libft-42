/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 17:55:03 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 17:55:06 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	t;
	long	long_nb;
	long	divide;

	long_nb = (long)n;
	if (long_nb < 0)
	{
		long_nb = long_nb * -1;
		ft_putchar_fd('-', fd);
	}
	t = long_nb;
	divide = 1;
	while (t != 0)
	{
		divide = divide * 10;
		t = t / 10;
	}
	while (divide > 1)
	{
		ft_putchar_fd(48 + (long_nb % divide) / (divide / 10), fd);
		divide = divide / 10;
	}
	if (long_nb == 0)
		ft_putchar_fd('0', fd);
}
