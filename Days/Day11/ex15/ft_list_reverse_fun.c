/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 23:22:27 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/21 17:52:28 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int n;

	n = 1;
	if (begin_list == 0)
		return (0);
	while (begin_list->next != 0)
	{
		n++;
		begin_list = begin_list->next;
	}
	return (n);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*tmp;
	t_list	*next;
	void	*var;
	int		len;
	int		i;

	len = ft_list_size(begin_list);
	if (begin_list == NULL)
		return ;
	while (len > 0)
	{
		i = 0;
		tmp = begin_list;
		next = tmp->next;
		while (next && i < len - 1)
		{
			var = tmp->data;
			tmp->data = next->data;
			tmp->next->data = var;
			tmp = tmp->next;
			next = next->next;
			i++;
		}
		len = len - 1;
	}
}
