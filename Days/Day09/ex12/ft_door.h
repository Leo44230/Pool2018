/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:17:53 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/13 01:11:24 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

# define CLOSE 0
# define OPEN 1
# define TRUE 1

typedef	int		t_bool;

typedef	struct	s_door
{
	t_bool state;
}				t_door;

t_bool			close_door(t_door *door);
t_bool			open_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);

#endif
