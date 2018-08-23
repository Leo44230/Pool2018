/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:36:30 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/15 17:41:11 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fcts.h"

int	ind_calc(char opp)
{
	char	tab[5];
	int		i;

	tab[0] = '+';
	tab[1] = '-';
	tab[2] = '*';
	tab[3] = '/';
	tab[4] = '%';
	i = -1;
	while (++i < 5)
	{
		if (tab[i] == opp)
			return (i);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	void (*fcts_opp[5])(char*, char*);

	fcts_opp[0] = ft_add;
	fcts_opp[1] = ft_sub;
	fcts_opp[2] = ft_mul;
	fcts_opp[3] = ft_div;
	fcts_opp[4] = ft_mod;
	if (argc != 4)
		return (0);
	if (ind_calc(argv[2][0]) == (-1))
	{
		ft_putstr("0\n");
		return (0);
	}
	fcts_opp[ind_calc(argv[2][0])](argv[1], argv[3]);
	ft_putchar('\n');
}
