/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 02:14:40 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/23 15:40:52 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

void	ft_display_error(int err, char *name)
{
	ft_putstr("cat: ");
	ft_putstr(name);
	if (err == EACCES)
		ft_putstr(": Permission denied\n");
	else if (err == EISDIR)
		ft_putstr(": Is a directory\n");
	else if (err != 0)
		ft_putstr(": No such file or directory\n");
}

void	read_file(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	errno = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_display_error(errno, file);
		return ;
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (errno == EISDIR)
		{
			ft_display_error(errno, file);
			return ;
		}
		buf[ret] = 0;
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return ;
}

void	read_input(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = 0;
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		read_input();
	while (i < argc)
	{
		read_file(argv[i]);
		i++;
	}
	return (0);
}
