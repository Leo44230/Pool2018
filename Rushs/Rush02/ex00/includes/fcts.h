/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fcts.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 23:54:44 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/19 23:20:06 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FCTS_H
# define FCTS_H

# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 8192

int		ft_read_error(char **str, char **str2);
char	*ft_strdup(char *src, char *src2, int size);
void	ft_putchar(char c);
char	*ft_concat(char *str1, char *str2);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int n);

int		nb_col(char *str);
int		nb_line(char *str);
void	ft_find_colle(char *str);

char	*colle00(int col, int line);
char	*colle01(int col, int line);
char	*colle02(int col, int line);
char	*colle03(int col, int line);
char	*colle04(int col, int line);

#endif
