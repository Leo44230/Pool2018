/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 23:31:20 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/20 00:06:34 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;

	new_elem = ft_create_elem(data);
	if (*begin_list == 0)
	{
		*begin_list = new_elem;
	}
	else
	{
		new_elem->next = *begin_list;
		*begin_list = new_elem;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;

	list = 0;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}
