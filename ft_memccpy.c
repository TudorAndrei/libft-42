/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 17:24:59 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/18 21:24:34 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned	char	*cdest;
	unsigned	char	*csrc;
	unsigned	char	x;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	x = (unsigned char)c;
	while (len-- > 0)
	{
		*cdest = *csrc++;
		if (*cdest == x)
			return (++cdest);
		cdest++;
	}
	return (NULL);
}
