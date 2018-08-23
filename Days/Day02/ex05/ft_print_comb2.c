/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 17:07:06 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/02 00:45:27 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	afficher(char e, char f, char g, char h)
{
	ft_putchar(e);
	ft_putchar(f);
	ft_putchar(32);
	ft_putchar(g);
	ft_putchar(h);
	if (e != '9' || f != '8' || g != '9' || h != '9')
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb2(void)
{
	char tab[4];

	tab[0] = 48;
	tab[1] = 48;
	while (tab[0] <= 57)
	{
		tab[2] = tab[0];
		while (tab[1] <= 57)
		{
			tab[3] = tab[1] + 1;
			while (tab[2] <= 57)
			{
				while (tab[3] <= 57)
					afficher(tab[0], tab[1], tab[2], tab[3]++);
				tab[2]++;
				tab[3] = 48;
			}
			tab[1]++;
			tab[2] = tab[0];
		}
		tab[0]++;
		tab[1] = 48;
	}
}
