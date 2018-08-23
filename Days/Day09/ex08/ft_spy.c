/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 07:11:22 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/10 08:08:13 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		match(char *str, char *word)
{
	int j;
	int i;

	i = 0;
	while (str[i] == ' ')
		i++;
	j = 0;
	while (((str[i] >= 'a' && str[i] <= 'z') && str[i] == word[j] && word[j]) ||
			((str[i] >= 'A' && str[i] <= 'Z') && (str[i] + 32) == word[j]
			&& word[j]))
	{
		i++;
		j++;
	}
	if (word[j] == 0)
		return (1);
	return (0);
}

void	ft_spy(char **str)
{
	int i;
	int k;

	k = 0;
	i = 1;
	while (str[i])
	{
		if (match(str[i], "bauer") || match(str[i], "attack")
			|| match(str[i], "president"))
			k++;
		i++;
	}
	if (k >= 1)
	{
		write(1, "Alert!!!\n", 9);
	}
}

int		main(int argc, char **argv)
{
	if (argc >= 0)
		ft_spy(argv);
	return (0);
}
