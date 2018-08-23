/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 14:56:08 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/21 02:28:28 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fcts.h"

int		main(void)
{
	char		*str;
	char		*str2;
	int			buff;
	long long	tempbuff;

	if (!(str2 = malloc(sizeof(char) * 1)))
		return (0);
	str2[0] = '\0';
	tempbuff = 0;
	if (!(str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (0);
	str[BUFF_SIZE] = '\0';
	while ((buff = read(0, str, BUFF_SIZE)))
	{
		if (buff == -1)
			if (ft_read_error(&str, &str2))
				return (0);
		tempbuff += buff;
		str2 = ft_strdup(str2, str, tempbuff);
	}
	free(str);
	ft_find_colle(str2);
	free(str2);
	return (0);
}
