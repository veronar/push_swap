/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 09:04:05 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/05 14:18:19 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

/*
** ft_is_ascending: checks if the list given is in ascending order
** differs from ft_check_sort in that it diregards whatever is in the
** stack. eg. we usually check order of stack A, this disregards whether
** stack B is empty or not.
*/

int			ft_is_ascending(t_dlist **head)
{
	t_dlist	*current;
	t_dlist	*second;

	current = *head;
	second = current->next;
	while (second != NULL)
	{
		if (second->n < current->n)
			return (0);
		current = current->next;
		second = second->next;
	}
	return (1);
}

/*
** ft_smallest: finds the node with the smallest integer in it.
** returns pointer to said node.
*/

t_dlist		*ft_smallest(t_dlist **head_a)
{
	t_dlist	*ret;
	t_dlist	*temp;

	ret = *head_a;
	temp = ret;
	while (ret != NULL)
	{
		if (ret->n < temp->n)
			temp = ret;
		ret = ret->next;
	}
	return (temp);
}

/*
** ft_small_to_top: used more for sorting 3list.
** calls ft_smallest to find smallest node.
** applies "ra" until the smallest number is at the top of the stack
** if stack A is now sorted in ascending it returns 1. else it pushes that
** smallest number to the top of stack B by calling "pb"
*/

int		ft_small_to_top(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*small;

	small = ft_smallest(head_a);
	while (small->n != (*head_a)->n)
		ft_push_rota(head_a);
	if (ft_is_ascending(head_a) == 1)
		return (1);
	ft_push_pb(head_a, head_b);
	return (0);
}

/*
** ft_sortsize: calls ft_lst_size to get the size of list of int arguments
** that were generated. It then calls the relevant sorting function
** dependant on that list size
*/

void		ft_sortsize(t_dlist **head_a, t_dlist **head_b)
{
	size_t	lstlen;

	lstlen = ft_lst_size(head_a);
	if (lstlen == 0)
		ft_error(head_a);
	else if (lstlen == 1)
		return ;
	else if (lstlen == 2)
		ft_2list(head_a, head_b);
	else if (lstlen == 3)
		ft_3list(head_a, head_b);
	else if (lstlen <= 5)
		ft_5list(head_a, head_b);
}
