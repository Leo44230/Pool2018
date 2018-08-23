/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:44:02 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/10 16:41:08 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
		n++;
	return (n);
}

int		ft_totallen(char **str, char *sep)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (str[i])
	{
		len = len + ft_strlen(str[i]) + ft_strlen(sep);
		i++;
	}
	if (len > 0)
		len = len - ft_strlen(sep);
	return (len);
}

void	add_elem(char **tab, char *str, int i, int k)
{
	int j;

	j = 0;
	while (tab[i][j])
	{
		str[k] = tab[i][j];
		k++;
		j++;
	}
}

char	*ft_join(char **tab, char *sep)
{
	char	*str;
	int		i;
	int		k;
	int		n;

	n = 0;
	k = 0;
	i = 0;
	str = (char *)malloc(sizeof(char) * ft_totallen(tab, sep));
	while (tab[i])
	{
		add_elem(tab, str, i, k);
		k = k + ft_strlen(tab[i]);
		n = 0;
		while (sep[n] && tab[i + 1])
		{
			str[k] = sep[n];
			n++;
			k++;
		}
		i++;
	}
	str[k] = 0;
	return (str);
}
