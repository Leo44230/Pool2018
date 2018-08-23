/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique_solution.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvandamm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 16:28:13 by pvandamm          #+#    #+#             */
/*   Updated: 2018/08/12 22:24:05 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nb_on_line_(int nb, int line, int column, int **tab)
{
	int tmp;

	tmp = column;
	column = -1;
	while (++column < 9)
	{
		if (tab[line][column] == nb)
			return (0);
	}
	column = tmp;
	line = -1;
	while (++line < 9)
	{
		if (tab[line][column] == nb)
			return (0);
	}
	return (1);
}

int	ft_nb_on_block_(int nb, int column, int line, int **tab)
{
	int a;
	int b;

	line = line - (line % 3);
	column = column - (column % 3);
	a = line + 3;
	b = column + 3;
	while (line < a)
	{
		while (column < b)
		{
			if (tab[line][column] == nb)
				return (0);
			column++;
		}
		column = b - 3;
		line++;
	}
	return (1);
}

int	ft_nb_is_available_(int nb, int column, int line, int **tab)
{
	if (ft_nb_on_line_(nb, line, column, tab) &&
			ft_nb_on_block_(nb, column, line, tab))
		return (1);
	else
		return (0);
}

int	ft_unique_solution(int column, int line, int **tab, int *nb_solution)
{
	int nb;

	if (column == 9)
	{
		column = 0;
		line++;
	}
	if (line == 9)
	{
		*nb_solution += 1;
		return (1);
	}
	if (tab[line][column] != 0)
		return (ft_unique_solution(column + 1, line, tab, nb_solution));
	nb = -1;
	while (++nb <= 9 && *nb_solution < 2)
	{
		if (ft_nb_is_available_(nb, column, line, tab))
		{
			tab[line][column] = nb;
			(ft_unique_solution(column + 1, line, tab, nb_solution));
		}
	}
	tab[line][column] = 0;
	return (0);
}
