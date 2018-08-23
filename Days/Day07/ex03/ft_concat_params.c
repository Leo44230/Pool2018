/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:28:00 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/13 12:56:06 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len(int k, char **str)
{
	unsigned int	len;
	unsigned int	i;
	int				j;

	j = 1;
	len = 0;
	while (j < k)
	{
		i = 0;
		while ((*(*(str + j) + i)) != '\0')
		{
			len++;
			i++;
		}
		len++;
		j++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int					i;
	unsigned int		len;
	char				*chaine;
	unsigned int		j;
	unsigned int		k;

	k = 0;
	i = 1;
	len = ft_len(argc, argv) - 3;
	chaine = (char *)malloc((sizeof(char)) * len);
	while (i < argc)
	{
		j = 0;
		while ((*(*(argv + i) + j)) != '\0')
			chaine[k++] = (*(*(argv + i) + j++));
		if (i != argc - 1)
		{
			chaine[k] = '\n';
			k++;
		}
		i++;
	}
	chaine[k] = 0;
	return (chaine);
}
