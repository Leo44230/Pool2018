/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 01:03:21 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/22 01:59:13 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*current;
	t_list	*next;
	t_list	*elem;
	int		cont;

	elem = ft_create_elem(data);
	current = *begin_list;
	cont = (current == 0) ? 0 : 1;
	*begin_list = (current == 0) ? elem : *begin_list;
	*begin_list = (cont && cmp(data, current->data) <= 0) ? elem : *begin_list;
	elem->next = (cont && cmp(data, current->data) <= 0) ? current : elem->next;
	cont = (cont && cmp(data, current->data) <= 0) ? 0 : 1;
	while (cont && current)
	{
		next = current->next;
		current->next = (next == 0) ? elem : current->next;
		cont = (next == 0) ? 0 : 1;
		if (cont && cmp(data, next->data) <= 0)
		{
			current->next = elem;
			elem->next = next;
			return ;
		}
		current = current->next;
	}
}
