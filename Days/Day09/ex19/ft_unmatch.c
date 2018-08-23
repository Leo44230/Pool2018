/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 15:31:30 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/10 16:22:06 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int nb;

	i = 0;
	while (i < length)
	{
		j = 0;
		nb = 0;
		while (j < length)
		{
			if (tab[i] == tab[j])
				nb++;
			j++;
		}
		if ((nb % 2) == 1)
			return (tab[i]);
		i++;
	}
	return (-1);
}
