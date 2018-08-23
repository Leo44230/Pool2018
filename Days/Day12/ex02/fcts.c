/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fcts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 23:46:57 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/21 16:22:18 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

int		is_number(char *str)
{
	int i;

	if (!str)
		return (0);
	i = 0;
	if (str[0] != '+' && str[0] != '-' && (str[0] < '0' || str[0] > '9'))
		return (0);
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	if (str[0] == '+')
		return (2);
	return (1);
}

int		is_dash(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i >= 2)
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return ((str[0] == '-' && str[1] == 'c') ? 1 : 0);
}

void	ft_header(char *file)
{
	ft_putstr("==> ");
	ft_putstr(file);
	ft_putstr(" <==\n");
}

int		len_argv(char **argv)
{
	int n;

	n = 0;
	while (argv[n])
		n++;
	return (n);
}
