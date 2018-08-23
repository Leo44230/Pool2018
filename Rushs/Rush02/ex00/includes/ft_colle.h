/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 14:55:08 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/18 19:12:48 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLLE_H
# define FT_COLLE_H

typedef struct	s_colle
{
	int		num;
	char	*(*ft)(int, int);
	char	*name;
}				t_colle;

t_colle g_colletab[] =
{
	{0, &colle00, "[colle-00]"},
	{1, &colle01, "[colle-01]"},
	{2, &colle02, "[colle-02]"},
	{3, &colle03, "[colle-03]"},
	{4, &colle04, "[colle-04]"},
};
#endif
