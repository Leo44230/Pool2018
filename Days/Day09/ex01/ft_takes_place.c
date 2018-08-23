/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:48:59 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/10 13:36:28 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_display(int hoor, int hoor2, char *ampm, char *ampm2)
{
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d%s%s", hoor, ".00 ", ampm);
	printf("%s", " AND ");
	printf("%d%s%s", hoor2, ".00 ", ampm2);
	printf("%c", '\n');
}

void	ft_takes_place(int hoor)
{
	int		hoor2;
	char	*ampm;
	char	*ampm2;

	hoor2 = hoor + 1;
	ampm = (hoor >= 12 && hoor < 24) ? "P.M." : "A.M.";
	ampm2 = (hoor2 >= 12 && hoor2 < 24) ? "P.M." : "A.M.";
	if (hoor == 0)
		hoor = 12;
	if (hoor > 12)
		hoor = hoor - 12;
	if (hoor2 > 24)
		hoor2 = hoor2 - 24;
	if (hoor2 > 12)
		hoor2 = hoor2 - 12;
	ft_display(hoor, hoor2, ampm, ampm2);
}
