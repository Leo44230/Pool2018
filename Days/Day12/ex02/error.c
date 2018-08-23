/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 23:55:30 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/21 16:23:34 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

void	ft_error(int err, char *name)
{
	ft_putstr("tail: ");
	ft_putstr(name);
	if (err == EACCES)
		ft_putstr(": Permission denied\n");
	else if (err == EISDIR)
		ft_putstr(": Is a directory\n");
	else if (err != 0)
		ft_putstr(": No such file or directory\n");
}

void	ft_print_error(char **argv)
{
	ft_putstr("ft_tail: illegal offset -- ");
	ft_putstr(argv[2]);
	ft_putstr("\n");
}
