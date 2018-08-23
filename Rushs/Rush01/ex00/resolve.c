/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvandamm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 12:53:44 by pvandamm          #+#    #+#             */
/*   Updated: 2018/08/12 22:22:17 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nb_on_line_col(int nb, int line, int column, int **tab)
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

int	ft_nb_on_block(int nb, int column, int line, int **tab)
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

int	ft_nb_is_available(int nb, int column, int line, int **tab)
{
	if (ft_nb_on_line_col(nb, line, column, tab) &&
			ft_nb_on_block(nb, column, line, tab))
		return (1);
	else
		return (0);
}

int	ft_resolve(int column, int line, int **tab)
{
	int nb;

	if (column == 9)
	{
		column = 0;
		line++;
	}
	if (line == 9)
		return (1);
	if (tab[line][column] != 0)
		return (ft_resolve(column + 1, line, tab));
	nb = -1;
	while (++nb <= 9)
	{
		if (ft_nb_is_available(nb, column, line, tab))
		{
			tab[line][column] = nb;
			if (ft_resolve(column + 1, line, tab))
				return (1);
		}
	}
	tab[line][column] = 0;
	return (0);
}
