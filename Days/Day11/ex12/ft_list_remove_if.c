/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 22:34:23 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/20 00:18:43 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;
	t_list	*tmp;

	prev = 0;
	current = *begin_list;
	next = 0;
	while (current)
	{
		next = current->next;
		if (cmp(current->data, data_ref) == 0)
		{
			tmp = current;
			if (current == *begin_list)
				*begin_list = next;
			else
				prev->next = next;
			prev = current;
			free(tmp);
		}
		prev = current;
		current = next;
	}
}
