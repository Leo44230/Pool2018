/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 01:51:22 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/20 00:07:19 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	tmp = *begin_list;
	while (tmp)
	{
		tmp = tmp->next;
		free(*begin_list);
		*begin_list = tmp;
	}
	tmp = 0;
	begin_list = &tmp;
}
