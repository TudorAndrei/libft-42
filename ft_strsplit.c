/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 14:15:56 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 15:20:58 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int		ft_wdlen(char const *s, char c)
{
	int	len;
	int i;

	i = 0;
	len = 0;
	while ((s[i] != c) && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static int		ft_word_number(char const *s, char c)
{
	int		count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (in_word == 1 && *s == c)
			in_word = 0;
		if (in_word == 0 && *s != c)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		word_number;

	i = 0;
	if (!s)
		return (NULL);
	word_number = ft_word_number(s, c);
	if (!(res = (char**)malloc(sizeof(char*) * (1 + word_number))))
		return (NULL);
	while (i < word_number)
	{
		while (*s && *s == c)
			s++;
		res[i] = ft_strsub((char const *)s, 0, ft_wdlen((char const *)s, c));
		s = s + ft_wdlen(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
