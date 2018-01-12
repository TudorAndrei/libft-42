/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdumitra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 17:40:56 by tdumitra          #+#    #+#             */
/*   Updated: 2017/12/19 17:40:58 by tdumitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*next;

	current = *alst;
	next = current->next;
	while (current->next != NULL)
	{
		ft_lstdelone(&current, del);
		current = next;
		next = current->next;
	}
	ft_lstdelone(&current, del);
	*alst = NULL;
}
