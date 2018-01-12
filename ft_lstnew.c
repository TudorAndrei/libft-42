/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 17:40:00 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 17:40:01 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*el;

	el = (t_list*)malloc(sizeof(*el));
	if (el != NULL)
	{
		if (content == NULL)
		{
			el->content = NULL;
			el->content_size = 0;
		}
		else
		{
			el->content = (unsigned char*)malloc(content_size);
			if (el->content == NULL)
			{
				ft_memdel((void**)&el);
				return (NULL);
			}
			ft_memcpy(el->content, content, content_size);
			el->content_size = content_size;
		}
		el->next = NULL;
	}
	return (el);
}
