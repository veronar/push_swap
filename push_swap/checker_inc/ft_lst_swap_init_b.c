/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_swap&init_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/13 16:43:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** ft_lst_swap: swap the first 2 elements at the top of a stack.
** Do nothing if there is only one or no elements).
** Pointer to start of specific stack must be called, ie. stack a or stack b.
*/

void		ft_lst_swap(t_dlist **head)
{
	t_dlist	*first;
	t_dlist	*second;

	first = *head;
	if (first == NULL || first->next == NULL)
		return ;
	second = first->next;
	ft_swap(&first->n, &second->n);
	ft_swap(&first->norm, &second->norm);
	return ;
}

/*
** ft_ss_swap_ab: swap the first 2 elements at the top of a stack a and stack b
** Do nothing if there is only one or no elements).
*/

void		ft_ss_swap_ab(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*a;
	t_dlist	*b;

	a = *head_a;
	b = *head_b;
	if (!(a == NULL || a->next == NULL))
		ft_lst_swap(head_a);
	if (!(b == NULL || b->next == NULL))
		ft_lst_swap(head_b);
}

/*
** ft_newnode_b: creates the headnode (starts the list) for stack b
** Take an int as an argument and stores it in the headnode
** ->next && ->prev are equal to NULL as it is head and only node
*/

t_dlist		*ft_newnode_b(int a, int norm)
{
	t_dlist	*new;

	if (!(new = ft_memalloc(sizeof(t_dlist))))
		return (NULL);
	new->prev = NULL;
	new->n = a;
	new->norm = norm;
	new->next = NULL;
	return (new);
}

/*
** ft_init_list_b: only initialised by push_to_b / push_new_b
*/

t_dlist		*ft_init_list_b(int b, int norm)
{
	t_dlist	*head_b;

	if (!(head_b = ft_newnode_b(b, norm)))
		return (NULL);
	return (head_b);
}
