/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 13:32:11 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/22 20:15:15 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	max(int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}

int	btree_level_count(t_btree *root)
{
	if (root == 0)
		return (0);
	else
		return (1 + max(btree_level_count(root->left),
					btree_level_count(root->right)));
}
