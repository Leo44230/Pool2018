/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 00:33:04 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/21 23:58:10 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list1;
	t_list *list2;

	list1 = *begin_list1;
	list2 = begin_list2;
	if (*begin_list1 == 0)
	{
		*begin_list1 = list2;
		return ;
	}
	while (list1->next)
		list1 = list1->next;
	while (list2)
	{
		list1->next = list2;
		list1 = list1->next;
		list2 = list2->next;
	}
}
