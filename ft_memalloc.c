/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 12:31:23 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 12:46:24 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memalloc(size_t size)
{
	void *temp;

	if ((temp = malloc(size)))
	{
		ft_bzero(temp, size);
		return (temp);
	}
	return (NULL);
}
