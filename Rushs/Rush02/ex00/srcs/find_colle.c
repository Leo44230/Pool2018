/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_colle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 04:19:31 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/19 23:26:47 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"
#include "ft_colle.h"

void	ft_display(int num, int col, int line, int backline)
{
	if (num == -1)
	{
		ft_putstr("aucune\n");
		return ;
	}
	ft_putstr(g_colletab[num].name);
	ft_putstr(" [");
	ft_putnbr(col);
	ft_putstr("] [");
	ft_putnbr(line);
	ft_putstr("]");
	if (backline == 1)
		ft_putstr("\n");
}

void	ft_multy_solut(char *str, int col, int line)
{
	int i;
	int count;
	int tab[5];

	count = 0;
	i = -1;
	while (++i <= 4)
	{
		if (ft_strcmp(g_colletab[i].ft(col, line), str) == 0)
		{
			tab[count] = i;
			count++;
		}
	}
	tab[count] = 5;
	if (count == 0)
		ft_putstr("aucune");
	i = -1;
	while (tab[++i] != 5)
	{
		ft_display(tab[i], col, line, 0);
		if (i < count - 1)
			ft_putstr(" || ");
	}
	ft_putstr("\n");
}

void	ft_find_colle(char *str)
{
	int i;
	int num;
	int col;
	int line;

	col = nb_col(str);
	line = nb_line(str);
	i = -1;
	if (col == 0 | line == 0)
	{
		ft_putstr("aucune\n");
		return ;
	}
	if (col <= 2 || line <= 2)
	{
		ft_multy_solut(str, col, line);
		return ;
	}
	num = -1;
	while (++i <= 4 && num == -1)
	{
		if (ft_strcmp(g_colletab[i].ft(col, line), str) == 0)
			num = g_colletab[i].num;
	}
	ft_display(num, col, line, 1);
}
