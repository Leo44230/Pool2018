/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 02:14:40 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/21 17:18:07 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

void	read_file(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return ;
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = 0;
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return ;
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		read_file(argv[1]);
	return (0);
}
