/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvandamm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:13:37 by pvandamm          #+#    #+#             */
/*   Updated: 2018/08/12 22:39:12 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"

int		**ft_init_tab(void)
{
	int i;
	int j;
	int **tab;

	i = -1;
	j = -1;
	tab = malloc(sizeof(int *) * 9);
	if (tab == NULL)
		return (0);
	while (++i < 9)
	{
		tab[i] = malloc(sizeof(int) * 9);
		if (tab[i] == NULL)
			return (0);
	}
	return (tab);
}

int		**ft_create_tab(char **argv)
{
	int **tab;
	int i;
	int j;

	tab = ft_init_tab();
	j = -1;
	i = -1;
	while (++i < 9)
	{
		while (++j < 9)
		{
			if (argv[i + 1][j] > '0' && argv[i + 1][j] <= '9')
				tab[i][j] = argv[i + 1][j] - 48;
			if (argv[i + 1][j] == '.')
				tab[i][j] = 0;
		}
		j = -1;
	}
	return (tab);
}

int		ft_free_tab(int **tab, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
