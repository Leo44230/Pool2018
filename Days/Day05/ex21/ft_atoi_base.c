/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 15:06:05 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/09 09:54:27 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		power(int nb, int pow)
{
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	else
		return (nb * power(nb, pow - 1));
}

int		len(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
		n++;
	return (n);
}

int		checkbase(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	if (len(str) <= 1)
		return (0);
	while (i < len(str))
	{
		c = str[i];
		j = i + 1;
		while (j < len(str))
		{
			if (str[j] == c || str[j] == '+' || str[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		init(char *str, char *base, int iinit)
{
	int i;
	int j;
	int check;
	int imax;

	imax = -1;
	i = 0;
	if (iinit != 0)
		i = 1;
	while (i < len(str))
	{
		j = 0;
		check = 0;
		while (j < len(base))
		{
			imax = (str[i] == '+' || str[i] == '-') ? i : imax;
			if (str[i] == base[j] || str[i] == '+' || str[i] == '-')
				check = 1;
			j++;
		}
		if (check == 0)
			return (0);
		i++;
	}
	return (imax);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int	iinit;
	int	val;
	int	res;
	int j;

	iinit = (str[0] == '-' || str[0] == '+') ? 1 : 0;
	if (checkbase(base) == 0 || init(str, base, iinit) == 0)
		return (0);
	res = 0;
	i = iinit;
	while (i < len(str) && str[i] != '+' && str[i] != '-')
	{
		j = -1;
		while (j++ < len(base))
			val = (str[i] == base[j]) ? j : val;
		res = (init(str, base, iinit) > 0) ? res + val *
			power(len(base), init(str, base, iinit) - i++ - 1)
			: res + val * power(len(base), len(str) - i++ - 1);
	}
	if (str[0] == '+' || iinit == 0)
		return (res);
	return (-res);
}
