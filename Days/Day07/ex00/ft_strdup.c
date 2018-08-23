/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 23:48:03 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/13 12:53:50 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
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
