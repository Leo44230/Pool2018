/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 21:11:29 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/22 02:36:26 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_insert(t_list **begin_list, int (*cmp)())
{
	void	*val;

	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	else
	{
		if (cmp((*begin_list)->data, ((*begin_list)->next)->data) > 0)
		{
			val = (*begin_list)->data;
			(*begin_list)->data = ((*begin_list)->next)->data;
			((*begin_list)->next)->data = val;
			ft_insert(&((*begin_list)->next), cmp);
		}
		else
			return ;
	}
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	else
	{
		ft_list_sort(&((*begin_list)->next), cmp);
		ft_insert(begin_list, cmp);
	}
}
