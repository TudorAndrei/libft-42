/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 20:18:38 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 20:18:41 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	int		j;

	j = 0;
	new = (char*)malloc(sizeof(*new) * (ft_strlen(src) + 1));
	if (new != NULL)
	{
		while (src[j] != '\0')
		{
			new[j] = src[j];
			j++;
		}
		new[j] = '\0';
	}
	return (new);
}
