/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 02:17:32 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/21 16:20:34 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_H
# define READ_H

# define BUF_SIZE 4096
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# include <stdlib.h>

int		len_argv(char **argv);
void	ft_header(char *file);
void	ft_error(int err, char *name);
void	ft_print_error(char **argv);
int		is_dash(char *str);
int		is_number(char *str);
void	ft_error(int err, char *name);
void	ft_putstr(char *str);
int		is_dash(char *str);
void	read_input(void);
void	read_file(char *file, int size, int dash, int bl);
void	ft_putchar(char c);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*ft_strdup(char *src, char *src2, int size);
char	*create_buf(char *file);

#endif
