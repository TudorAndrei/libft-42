/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 13:36:01 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 13:59:35 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res = (char *)ft_memcpy(res, (s + start), len);
	res[len] = '\0';
	return (res);
}
