/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvandamm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 11:20:42 by pvandamm          #+#    #+#             */
/*   Updated: 2018/08/12 20:44:27 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"

int	ft_check_grid(int **tab)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j] != 0)
			{
				tmp = tab[i][j];
				tab[i][j] = 0;
				if (!ft_nb_is_available(tmp, j, i, tab))
					return (0);
				tab[i][j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_error(int argc, char **argv)
{
	int i;
	int j;
	int count;

	count = 1;
	i = 1;
	j = 0;
	if (argc != 10)
		return (0);
	while (count < argc)
	{
		while (argv[i][j] != '\0')
		{
			if ((argv[i][j] < '0' && argv[i][j] != '.') || argv[i][j] > '9')
				return (0);
			j++;
		}
		if (j != 9)
			return (0);
		j = 0;
		i++;
		count++;
	}
	return (1);
}
