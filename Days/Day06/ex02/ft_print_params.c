/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 15:33:55 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/08 01:53:18 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 0)
	{
		while (i < argc)
		{
			ft_putstr(argv[i++]);
			ft_putstr("\n");
		}
	}
}
