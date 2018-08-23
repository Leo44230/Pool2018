/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 18:25:08 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/08 01:54:52 by lgillett         ###   ########.fr       */
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

	i = argc;
	if (argc > 0)
	{
		while (i > 1)
		{
			ft_putstr(argv[i - 1]);
			ft_putstr("\n");
			i--;
		}
	}
}
