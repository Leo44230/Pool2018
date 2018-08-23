/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvandamm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 22:32:25 by pvandamm          #+#    #+#             */
/*   Updated: 2018/08/12 22:38:01 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"

int		main(int argc, char **argv)
{
	int **tab;
	int nb_sol;

	nb_sol = 0;
	if (!ft_error(argc, argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	tab = ft_create_tab(argv);
	if (ft_check_grid(tab) == 0)
	{
		write(1, "Error\n", 6);
		return (ft_free_tab(tab, 9));
	}
	ft_unique_solution(0, 0, tab, &nb_sol);
	if (nb_sol == 1)
	{
		ft_resolve(0, 0, tab);
		ft_print_table(tab);
	}
	else
		write(1, "Error\n", 6);
	return (ft_free_tab(tab, 9));
}
