/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:57:51 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/18 21:39:41 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		*str;
	char		x;
	int			m;

	m = -1;
	x = (char)c;
	str = (char *)s;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == x)
			m = i;
		i++;
	}
	if (m > -1)
		return (str + m);
	return (NULL);
}
