/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 01:10:27 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/05 01:54:33 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (nb > 1)
		{
			result = result * (--nb);
		}
	}
	return (result);
}
