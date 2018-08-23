/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 22:30:04 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/12 22:40:17 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	unsigned_nb;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	unsigned_nb = nb;
	if (unsigned_nb >= 10)
	{
		ft_putnbr(unsigned_nb / 10);
		ft_putnbr(unsigned_nb % 10);
	}
	else
	{
		ft_putchar(unsigned_nb + 48);
	}
}

void	ft_print_table(int **tab)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++i < 9)
	{
		while (++j < 9)
		{
			ft_putnbr(tab[i][j]);
			if (j < 8)
				write(1, " ", 1);
		}
		j = -1;
		write(1, "\n", 1);
	}
}
