/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 00:31:10 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/18 15:11:10 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fcts.h"
#include "ft_opp.h"

void	ft_usage(char *a, char *b)
{
	int		i;
	char	*c;

	c = a;
	c = b;
	ft_putstr("error : only [ ");
	i = 0;
	while (g_opptab[i].opp)
	{
		if (ft_strlen(g_opptab[i].opp) != 0)
		{
			ft_putstr(g_opptab[i].opp);
			ft_putstr(" ");
		}
		i++;
	}
	ft_putstr("] are accepted.");
}

int		is_equal(char *str1, char *str2)
{
	int i;

	if (ft_strlen(str1) != ft_strlen(str2))
		return (0);
	i = 0;
	while (str1[i])
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_calc(char *val1, char *opp, char *val2)
{
	int i;
	int j;

	j = 0;
	while (g_opptab[j].opp)
		j++;
	i = 0;
	while (g_opptab[i].opp && !is_equal(opp, g_opptab[i].opp))
	{
		i++;
	}
	if (i == j)
		ft_usage(val1, val2);
	else
		g_opptab[i].ft(val1, val2);
}
