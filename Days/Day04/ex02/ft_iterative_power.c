/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 01:11:25 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/04 15:01:48 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		while (power > 1)
		{
			result = result * nb;
			power--;
		}
	}
	return (result);
}
