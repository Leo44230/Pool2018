/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 11:56:07 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/13 13:47:57 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*tab;
	unsigned int	i;
	unsigned int	len;

	len = max - min;
	tab = NULL;
	if (min >= max)
		return (tab);
	tab = (int*)malloc((sizeof(int)) * (len));
	i = 0;
	while (i < len)
	{
		tab[i] = i + min;
		i++;
	}
	return (tab);
}
