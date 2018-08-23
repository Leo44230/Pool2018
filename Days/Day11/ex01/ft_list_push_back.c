/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 18:35:36 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/20 01:19:22 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list	*tmp;

	new_elem = ft_create_elem(data);
	tmp = *begin_list;
	if (tmp != 0)
	{
		while (tmp->next != 0)
		{
			tmp = tmp->next;
		}
		tmp->next = new_elem;
	}
	else
	{
		*begin_list = new_elem;
	}
}
