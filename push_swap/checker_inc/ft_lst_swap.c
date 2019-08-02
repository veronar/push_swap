/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/02 08:46:50 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../libft/libft.h"

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
