/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_aplly_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 13:51:23 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/22 20:19:51 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	ft_push(t_list **begin_list, t_btree *tree)
{
	t_list	*elem;
	t_list	*tmp;

	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->tree = tree;
		elem->next = 0;
	}
	tmp = *begin_list;
	if (tmp != 0)
	{
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = elem;
	}
	else
		*begin_list = elem;
}

t_list	*top(t_list **begin_list)
{
	t_list	*list;

	list = *begin_list;
	if (list == 0)
		return (0);
	while (list)
	{
		if (list->next == 0)
			return (list);
		list = list->next;
	}
	return (0);
}

t_btree	*pop(t_list **begin_list)
{
	t_list	*list;
	t_list	*next;
	t_btree	*tree;

	list = *begin_list;
	tree = 0;
	if (list == 0)
		return (0);
	next = list->next;
	if (next == 0)
	{
		*begin_list = 0;
		return (list->tree);
	}
	while (next)
	{
		tree = (next->next == 0) ? next->tree : tree;
		list->next = (next->next == 0) ? 0 : list->next;
		if (next->next == 0)
			return (next->tree);
		list = list->next;
		next = next->next;
	}
	return (0);
}

void	add_sons(t_list **fifo, t_btree *tree)
{
	if (tree->right)
		ft_push(fifo, tree->right);
	if (tree->left)
		ft_push(fifo, tree->left);
}

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	t_list	*fifo;
	t_list	*list;
	int		i;

	i = 0;
	fifo = 0;
	if (root == 0)
		return ;
	ft_push(&fifo, root);
	while (fifo)
	{
		list = 0;
		applyf(top(&fifo)->tree->item, i, 1);
		ft_push(&list, pop(&fifo));
		while (fifo)
		{
			applyf(top(&fifo)->tree->item, i, 0);
			ft_push(&list, pop(&fifo));
		}
		i++;
		while (list)
			add_sons(&fifo, pop(&list));
	}
}
