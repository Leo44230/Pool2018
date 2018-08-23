/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 14:11:11 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/15 17:36:23 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab2;

	tab2 = (int *)malloc(sizeof(int) * length);
	if (tab2 == NULL)
		return (0);
	i = -1;
	while (++i < length)
		tab2[i] = (*f)(tab[i]);
	return (tab2);
}
