/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 20:45:37 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/21 17:39:58 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
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
