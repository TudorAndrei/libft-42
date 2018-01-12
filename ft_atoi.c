/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 11:52:38 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 12:20:56 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static	int		ft_checklong(long long n)
{
	if (n > 922337203685477580)
		return (-1);
	if (n < -922337203685477580)
		return (0);
	return (2);
}

int				ft_atoi(const char *str)
{
	int			i;
	int			sgn;
	long long	nr;

	nr = 0;
	sgn = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sgn = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (ft_checklong(nr) != 2)
			return (ft_checklong(nr));
		nr = nr * 10 + (str[i] - '0') * sgn;
		if (sgn == 1 && nr < 0)
			return (-1);
		if (sgn == -1 && nr > 0)
			return (0);
		i++;
	}
	return ((int)nr);
}
