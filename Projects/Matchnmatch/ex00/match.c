/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 02:30:37 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/12 15:28:47 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 != 0 && *s2 == '*')
		return (match(s1, (s2 + 1)) || match((s1 + 1), s2));
	else if (*s1 == *s2 && *s1 != 0 && *s2 != 0)
		return (match((s1 + 1), (s2 + 1)));
	else if (*s1 == *s2 && *s1 == 0 && *s2 == 0)
		return (1);
	else if (*s1 == 0 && *s2 != 0 && *s2 != '*')
		return (0);
	return (0);
}
