/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 18:41:31 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/14 22:13:19 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

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

void	ft_sort_table(char **tab, int size)
{
	int i;
	int j;

	i = size - 1;
	while (i > 0)
	{
		j = 1;
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

int		main(int argc, char **argv)
{
	int i;

	ft_sort_table(argv, argc);
	i = 1;
	if (argc > 0)
	{
		while (i < argc)
		{
			ft_putstr(argv[i++]);
			ft_putstr("\n");
		}
	}
	return (0);
}
