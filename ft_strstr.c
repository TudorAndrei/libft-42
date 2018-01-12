/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 21:08:36 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/18 21:42:25 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int l;
	int j;

	i = 0;
	l = ft_strlen(little);
	j = 0;
	if (l == 0)
		return ((char *)(big));
	while (big[i])
	{
		while (little[j] == big[i + j])
		{
			if (j == l - 1)
				return ((char *)(big + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
