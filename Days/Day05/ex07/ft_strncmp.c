/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 18:21:43 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/18 01:50:11 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		if (s1[i] == 0 && s2[i] == 0)
			return (0);
		i++;
	}
	if (s1[i] == 0 && s2[i] == 0)
		return (0);
	else if (s2[i] == 0)
		return (s1[i]);
	else if (s1[i] == 0)
		return (-s2[i]);
	else
		return (s1[i] - s2[i]);
}
