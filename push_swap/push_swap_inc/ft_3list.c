/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 14:36:22 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/05 10:46:37 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

/*
** ft_3lst: for list of size 3
** push?
*/

int			ft_3list(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*first;
	t_dlist	*second;
	t_dlist	*last;

	first = *head_a;
	second = first->next;
	last = second->next;
	if (ft_check_sort(head_a, head_b) == 1)
		return (1);
	if ((first->n > second->n) && (second->n > last->n))
	{
		ft_push_swapa(head_a);
		ft_push_revrota(head_a);
	}
	if (ft_small_to_top(head_a, head_b) == 1)
		if (ft_check_sort(head_a, head_b) == 1)
			return (1);
	if ((*head_a)->n > (*head_a)->next->n)
		ft_push_swapa(head_a);
	ft_push_pa(head_a, head_b);
	return (ft_check_sort(head_a, head_b));
}
