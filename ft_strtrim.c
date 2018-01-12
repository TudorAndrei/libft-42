/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 14:00:13 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 14:15:36 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strtrim(char const *s)
{
	char	*temp;
	int		len;
	int		i;

	if (s)
	{
		i = 0;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		len = ft_strlen(s) - 1;
		while (len > i && (s[len] == ' ' || s[len] == '\t' || s[len] == '\n'))
			len--;
		if (len < i)
			return (temp = ft_strdup(""));
		if ((temp = ft_strsub(s, i, len - i + 1)))
			return (temp);
	}
	return (NULL);
}
