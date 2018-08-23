/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 05:32:54 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/22 19:54:41 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root,
		void *item, int (*cmpf)(void *, void *))
{
	t_btree *elem;
	t_btree *tree;

	tree = *root;
	elem = btree_create_node(item);
	if (tree == 0)
		*root = elem;
	else
	{
		if (cmpf(item, tree->item) < 0)
			btree_insert_data(&tree->left, item, cmpf);
		else
			btree_insert_data(&tree->right, item, cmpf);
	}
}
