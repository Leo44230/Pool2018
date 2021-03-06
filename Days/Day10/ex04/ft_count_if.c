/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 14:57:28 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/14 15:19:16 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	if (*tab)
	{
		if ((*f)(*tab))
		{
			tab++;
			return (1 + ft_count_if(tab, f));
		}
		else
		{
			tab++;
			return (ft_count_if(tab, f));
		}
	}
	return (0);
}
