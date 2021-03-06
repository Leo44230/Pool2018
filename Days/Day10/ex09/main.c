/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:36:30 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/15 14:31:28 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fcts.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	ft_calc(argv[1], argv[2], argv[3]);
	ft_putchar('\n');
	return (0);
}
