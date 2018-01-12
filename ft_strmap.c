/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 13:05:55 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 13:32:41 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*temp;
	size_t	i;

	i = 0;
	if (s)
	{
		if ((temp = ft_strnew(ft_strlen(s))))
		{
			while (i < ft_strlen(s))
			{
				temp[i] = f(s[i]);
				i++;
			}
			return (temp);
		}
	}
	return (NULL);
}
