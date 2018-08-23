/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_buf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 03:10:12 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/21 16:35:09 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

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
	if (!(src2 = (char*)malloc(sizeof(char) * (BUF_SIZE + 1))))
		return (0);
	return (dest);
}

char	*create_buf(char *file)
{
	char		*str;
	char		*str2;
	int			buff;
	long long	tempbuff;
	int			fd;

	if (!(str2 = malloc(sizeof(char) * 1)))
		return (0);
	str2[0] = '\0';
	tempbuff = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_error(errno, file);
	if (!(str = (char*)malloc(sizeof(char) * (BUF_SIZE + 1))))
		return (0);
	str[BUF_SIZE] = '\0';
	while (errno != EISDIR && (buff = read(fd, str, BUF_SIZE)) && fd != -1)
	{
		tempbuff += buff;
		str2 = ft_strdup(str2, str, tempbuff);
		if (errno == EISDIR)
			ft_error(errno, file);
	}
	return ((errno == EISDIR) ? 0 : str2);
}
