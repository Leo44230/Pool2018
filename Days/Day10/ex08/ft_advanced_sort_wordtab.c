/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 22:29:32 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/14 22:37:03 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;

	i = 0;
	while (tab[i])
		i++;
	i--;
	while (i >= 0)
	{
		j = 0;
		while (j < i)
		{
			if (cmp(tab[j + 1], tab[j]) < 0)
			{
				ft_swap(&tab[j + 1], &tab[j]);
			}
			j++;
		}
		i--;
	}
}
