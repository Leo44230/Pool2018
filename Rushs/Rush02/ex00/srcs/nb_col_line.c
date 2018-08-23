/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_col_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 17:57:46 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/19 18:03:34 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"

int	nb_col(char *str)
{
	int i;

	i = 0;
	if (str[i] == 0)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

int	nb_line(char *str)
{
	int i;
	int n;

	n = 0;
	i = 0;
	if (str[i] == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			n++;
		i++;
	}
	return (n);
}
