/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:22:24 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/15 02:06:49 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (0);
	*range = (int *)malloc((sizeof(int)) * ((max - min)));
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = i + min;
		i++;
	}
	return (max - min);
}
