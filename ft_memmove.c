/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 17:43:58 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/18 21:33:51 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t			i;

	i = 0;
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	if (dest < src)
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			cdest[n - 1] = csrc[n - 1];
			n--;
		}
	}
	return (cdest);
}
