/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:56:55 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/21 03:41:12 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"
#include <stdio.h>

void	ft_display(char *str, int size, int dash)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(str);
	if (dash == 0)
		size = len;
	if (size < 0)
		size = -size;
	while (i < len - size)
		i++;
	if (dash == 2)
		i = size - 1;
	while (i < len)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	read_file(char *file, int size, int dash, int bl)
{
	int		fd;
	int		ret;
	char	*buf;
	int		i;

	buf = create_buf(file);
	if (bl == 1 && buf)
		ft_putchar('\n');
	if (buf)
	{
		ft_header(file);
		ft_display(buf, size, dash);
	}
}

void	read_file2(char *file, int size, int dash, int bl)
{
	int		fd;
	int		ret;
	char	*buf;

	buf = create_buf(file);
	if (bl == 1)
		ft_putchar('\n' && buf);
	if (buf)
		ft_display(buf, size, dash);
}

void	tail(char **argv, int i, int size, int dash)
{
	if (((size != 0 || dash) && i == 3) && len_argv(argv) == 4)
		read_file2(argv[i], size, dash, 0);
	else if ((!(size != 0 || dash) && i == 1) && len_argv(argv) == 2)
		read_file2(argv[i], size, dash, 0);
	else if ((size != 0 || dash) && i > 3)
		read_file(argv[i], size, dash, 1);
	else if (!(size != 0 || dash) && i > 1)
		read_file(argv[i], size, dash, 1);
	else
		read_file(argv[i], size, dash, 0);
}

int		main(int argc, char **argv)
{
	int i;
	int size;
	int dash;

	dash = 0;
	size = 0;
	if (argc == 1)
		return (0);
	if (is_dash(argv[1]))
	{
		if (argc > 2)
		{
			size = (is_number(argv[2])) ? ft_atoi(argv[2]) : size;
			if (!is_number(argv[2]))
			{
				ft_print_error(argv);
				return (0);
			}
		}
		dash = is_number(argv[2]);
	}
	i = (size != 0 || dash) ? 2 : 0;
	while (++i < argc)
		tail(argv, i, size, dash);
	return (0);
}
