/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 13:40:38 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 13:59:11 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if ((temp = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
	{
		while (i < ft_strlen(s1))
		{
			temp[i] = s1[i];
			i++;
		}
		i = 0;
		while (i < ft_strlen(s1) + ft_strlen(s2))
		{
			temp[i + ft_strlen(s1)] = s2[i];
			i++;
		}
		return (temp);
	}
	return (NULL);
}
