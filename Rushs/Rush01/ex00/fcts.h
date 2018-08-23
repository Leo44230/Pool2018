/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fcts.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 20:19:33 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/12 22:36:56 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FCTS_H
# define FCTS_H

# include <unistd.h>
# include <stdlib.h>

int		**ft_create_tab(char **argv);
void	ft_print_table(int **tab);
int		ft_resolve(int column, int line, int **tab);
int		ft_error(int argc, char **argv);
int		ft_unique_solution(int col, int lin, int **tab, int *nb_sol);
int		ft_check_grid(int **tab);
int		ft_nb_is_available(int nb, int column, int line, int **tab);
int		ft_free_tab(int **tab, int length);

#endif
