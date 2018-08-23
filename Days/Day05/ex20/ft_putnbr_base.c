/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 02:49:36 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/09 09:30:35 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
		n++;
	return (n);
}

char	*ft_putstrrev(char *str)
{
	int		n;
	int		index;
	int		len;
	char	tmp;

	len = ft_strlen(str);
	n = 0;
	while (n < len)
	{
		index = 0;
		while (index < len - n - 1)
		{
			tmp = *(str + index);
			*(str + index) = *(str + index + 1);
			*(str + index + 1) = tmp;
			index++;
		}
		n++;
	}
	return (str);
}

void	ft_tab(int dim, long nbr, char *base)
{
	int		i;
	int		j;
	char	conv[dim];

	j = 0;
	i = 0;
	if (nbr == 0)
		ft_putchar('0');
	while (nbr > 0)
	{
		conv[i] = base[nbr % dim];
		nbr = nbr / dim;
		i++;
	}
	conv[i] = 0;
	ft_putstrrev(conv);
	while (j < ft_strlen(conv))
	{
		ft_putchar(conv[j]);
		j++;
	}
}

int		duplicate(char *str)
{
	int		i;
	int		j;
	int		len;
	char	c;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		c = str[i];
		j = i + 1;
		while (j < len)
		{
			if (str[j] == c)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		j;
	int		except;
	long	nbr2;

	nbr2 = nbr;
	j = 0;
	except = 1;
	if (ft_strlen(base) <= 1 || duplicate(base) == 0)
		except = 0;
	while (j < ft_strlen(base))
	{
		if (base[j] == '+' || base[j] == '-')
			except = 0;
		j++;
	}
	if (except == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_tab(ft_strlen(base), -nbr2, base);
		}
		else
			ft_tab(ft_strlen(base), nbr2, base);
	}
}
