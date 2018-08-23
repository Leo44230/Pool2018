/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:49:10 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/21 23:34:52 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *previous;
	t_list *current;
	t_list *next;

	previous = *begin_list;
	if (previous && previous->next)
	{
		current = previous->next;
		previous->next = 0;
		if (current->next)
		{
			next = current->next;
			while (next)
			{
				current->next = previous;
				previous = current;
				current = next;
				next = next->next;
			}
		}
		current->next = previous;
		*begin_list = current;
	}
}
