/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:26:41 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/20 00:13:54 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (begin_list == 0)
		return (0);
	if (nbr == 0)
		return (begin_list);
	else
	{
		if (begin_list->next == 0)
			return (0);
		return (ft_list_at(begin_list->next, nbr - 1));
	}
}
