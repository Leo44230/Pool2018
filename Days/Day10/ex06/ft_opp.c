/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:16:10 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/15 14:23:56 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fcts.h"

void	ft_add(char *a, char *b)
{
	ft_putnbr(ft_atoi(a) + ft_atoi(b));
}

void	ft_sub(char *a, char *b)
{
	ft_putnbr(ft_atoi(a) - ft_atoi(b));
}

void	ft_mul(char *a, char *b)
{
	ft_putnbr(ft_atoi(a) * ft_atoi(b));
}

void	ft_div(char *a, char *b)
{
	if (ft_atoi(b) == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(ft_atoi(a) / ft_atoi(b));
}

void	ft_mod(char *a, char *b)
{
	if (ft_atoi(b) == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(ft_atoi(a) % ft_atoi(b));
}
