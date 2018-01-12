/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 13:22:36 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 13:33:59 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		result;

	result = 0;
	if (s1 && s2)
	{
		if (ft_strcmp(s1, s2) == 0)
			result = 1;
	}
	return (result);
}
