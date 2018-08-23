/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 01:17:42 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/09 12:14:14 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	racine;

	racine = 0;
	if (nb < 0)
		return (0);
	while (racine * racine < nb)
	{
		racine++;
	}
	if (racine * racine == nb)
		return (racine);
	return (0);
}
