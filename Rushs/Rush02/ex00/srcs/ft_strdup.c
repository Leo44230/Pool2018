/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:38:50 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/21 02:32:26 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"

char	*ft_strdup(char *src, char *src2, int size)
{
	int		len;
	int		c;
	char	*dest;

	if (!(dest = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	len = 0;
	while (src[len] != '\0' && len < size)
	{
		dest[len] = src[len];
		len++;
	}
	c = 0;
	while (src2[c] != '\0' && len < size)
	{
		dest[len] = src2[c];
		len++;
		c++;
	}
	dest[len] = '\0';
	if (!(src2 = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (0);
	return (dest);
}
