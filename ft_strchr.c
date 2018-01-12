/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:49:20 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/18 21:37:00 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	char	x;

	x = (char)c;
	str = (char *)s;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == x)
			return (str);
		i++;
		str++;
	}
	return (NULL);
}
