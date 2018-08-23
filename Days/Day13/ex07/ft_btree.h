/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 03:45:33 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/22 17:26:17 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H

# define FT_BTREE_H

# include <stdlib.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

typedef struct		s_list
{
	struct s_list	*next;
	t_btree			*tree;
}					t_list;

t_list				*ft_create_elem(void *data);

t_btree				*btree_create_node(void *item);

#endif
