/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:18:09 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/10 16:55:18 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int i;
	int j;
	int k;

	i = 0;
	while ( i < length)
	{
		j = i;
		while (tab[j] == 0 && j < length)
		{
			k++;
			j++;
		}
		j = i;
		if (k > 0)
		{
			length = length - 1;
		}
		while (j + k < length)
		{
			tab[j] = tab[j + k];
			tab[j + k] = 0;
			j++;
		}
		i++;
	}
	return(length);
}
