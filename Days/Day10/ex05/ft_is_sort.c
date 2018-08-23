/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 15:27:49 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/15 17:35:50 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_way(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i + 1 < length && (f(tab[i], tab[i + 1]) == 0))
		i++;
	if (i == length - 1)
		return (1);
	if (f(tab[i], tab[i + 1]) < 0)
		return (1);
	return (-1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	if (length <= 1)
		return (1);
	if (ft_way(tab, length, f) == 1)
	{
		i = 0;
		while (i + 1 < length && (f(tab[i], tab[i + 1]) <= 0))
			i++;
		return (i == length - 1);
	}
	else
	{
		i = 0;
		while (i + 1 < length && (f(tab[i], tab[i + 1]) >= 0))
			i++;
		return (i == length - 1);
	}
}
