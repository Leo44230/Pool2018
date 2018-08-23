/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:21:51 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/13 18:53:56 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
		n++;
	return (n);
}

long	power(int nb, int pow)
{
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	else
		return (nb * power(nb, pow - 1));
}

int		base_from_to_int(char *nbr, char *base_from)
{
	int res;
	int i;
	int j;
	int val;

	res = 0;
	i = 0;
	while (i < len(nbr))
	{
		j = -1;
		while (j++ < len(base_from))
			val = (nbr[i] == base_from[j]) ? j : val;
		res = res + val * power(len(base_from), len(nbr) - 1 - i);
		i++;
	}
	return (res);
}

char	*int_to_base_to(long nbr, char *base_to)
{
	char	*res;
	int		i;

	i = 0;
	while (power(len(base_to), i) < nbr)
		i++;
	i = (i == 0) ? 1 : i;
	res = (char *)malloc((sizeof(char)) * i);
	res[i] = 0;
	res[i - 1] = base_to[nbr % len(base_to)];
	i--;
	while (nbr > 0)
	{
		res[i] = base_to[nbr % len(base_to)];
		nbr = nbr / len(base_to);
		i--;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	dec;
	char	*result;

	dec = base_from_to_int(nbr, base_from);
	result = int_to_base_to(dec, base_to);
	return (result);
}
