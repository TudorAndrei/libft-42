/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 13:19:17 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 13:32:27 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp;
	unsigned int	i;

	i = 0;
	if (s)
	{
		if ((temp = ft_strnew(ft_strlen(s))))
		{
			while (i < ft_strlen(s))
			{
				temp[i] = f(i, s[i]);
				i++;
			}
			return (temp);
		}
	}
	return (NULL);
}
