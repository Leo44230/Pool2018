/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 22:52:40 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/10 13:23:02 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;

	i = size - 1;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (tab[j + 1] < tab[j])
			{
				ft_swap(&tab[j + 1], &tab[j]);
			}
			j++;
		}
		i--;
	}
}

int		ft_antidote(int i, int j, int k)
{
	int list[3];

	list[0] = i;
	list[1] = j;
	list[2] = k;
	ft_sort_integer_table(list, 3);
	return (list[1]);
}
