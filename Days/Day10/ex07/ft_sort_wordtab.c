/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 22:09:11 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/14 22:39:57 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == 0 && s2[i] == 0)
			return (0);
		i++;
	}
	if (s1[i] == 0 && s2[i] == 0)
		return (0);
	else if (s2[i] == 0)
		return (s1[i]);
	else if (s1[i] == 0)
		return (-s2[i]);
	else
		return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[j + 1], tab[j]) < 0)
			{
				ft_swap(&tab[j + 1], &tab[j]);
			}
			j++;
		}
		i--;
	}
}
