/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 01:33:41 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/14 20:57:39 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_len(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
		n++;
	return (n);
}

char				*ft_strdup(char *src)
{
	char	*copie;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	copie = (char*)malloc((sizeof(char)) * len);
	while (src[i])
	{
		copie[i] = src[i];
		i++;
	}
	copie[i] = 0;
	return (copie);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *tab;
	int			i;

	tab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		tab[i].size_param = ft_len(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		tab[i].str = (av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
