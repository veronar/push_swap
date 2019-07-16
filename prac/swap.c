/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/16 11:06:41 by vesingh          ###   ########.fr       */
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
/* 
void		ft_swap_b(j_list **head_b)
{
	j_list	*first;
	j_list	*second

	first = *head_b;
	if ( first == NULL || first->next == NULL)
		return ;
	second = first->next;
	ft_swap(&first->n, &second->n);
	return ;
}

void		ft_ss_swap_ab(j_list **head_a, j_list **head_b)
{
	ft_swap_a(head_a);
	ft_swap_b(head_b);

}*/