/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 03:13:10 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/04 15:38:34 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long	racine;

	racine = 0;
	if (nb <= 0)
		return (0);
	while (racine * racine < nb)
		racine++;
	return (racine);
}

int		ft_is_prime(int nb)
{
	int i;
	int racine;

	racine = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb % 3 == 0)
		return (0);
	i = 5;
	while (i <= racine)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}
