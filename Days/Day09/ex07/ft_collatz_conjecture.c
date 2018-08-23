/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 06:50:19 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/10 07:08:08 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else
	{
		if (base % 2 == 0)
			return (1 + ft_collatz_conjecture(base / 2));
		else \
			return (1 + ft_collatz_conjecture(3 * base + 1));
	}
}
