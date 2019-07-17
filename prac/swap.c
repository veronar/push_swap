/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/17 08:48:35 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

void		ft_swap_a(j_list **head_a)
{
	j_list	*first;
	j_list	*second;

	first = *head_a;
	if ( first == NULL || first->next == NULL)
		return ;
	second = first->next;
	ft_swap(&first->n, &second->n);
	return ;
}
 
void		ft_swap_b(j_list **head_b)
{
	j_list	*first;
	j_list	*second;

	first = *head_b;
	if ( first == NULL || first->next == NULL)
		return ;
	second = first->next;
	ft_swap(&first->n, &second->n);
	return ;
}

void		ft_ss_swap_ab(j_list **head_a, j_list **head_b)
{
	j_list	*a;
	j_list	*b;

	a = *head_a;
	b = *head_b;
	if (!(a == NULL || a->next == NULL))
		ft_swap_a(head_a);
	if (!(b == NULL || b->next == NULL))
		ft_swap_b(head_b);
}