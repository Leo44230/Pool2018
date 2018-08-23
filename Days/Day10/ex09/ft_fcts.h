/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fcts.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:29:45 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/18 23:47:23 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FCTS_H
# define FT_FCTS_H

# include <unistd.h>
# include <stdio.h>

void			ft_calc(char *val1, char *opp, char *val2);
void			ft_add(char *a, char *b);
void			ft_sub(char *a, char *b);
void			ft_mul(char *a, char *b);
void			ft_div(char *a, char *b);
void			ft_mod(char *a, char *b);
void			ft_usage(char *a, char *b);
int				ft_strlen(char *str);
int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putstr(char *str);

typedef struct	s_opp
{
	char	*opp;
	void	(*ft)(char*, char*);
}				t_opp;

#endif
