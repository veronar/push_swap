/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:32:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/17 11:19:02 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

/*
** ft_rotate: shifts all positions of the stack by 1
** first one becomes the last
*/

void		ft_lst_rotate(j_list **head)
{
	j_list	*first;
	j_list	*second;
	j_list	*last;

	if (*head == NULL)
		return ;
	first = *head;
	last = *head;
	second = *head;
	second = second->next;
	while (last->next != NULL)
		last = last->next;
	*head = second;
	last->next = first;
	first->prev = last;
	first->next = NULL;
	second->prev = NULL;
}

void		ft_lst_rotate_both(j_list **head_a, j_list **head_b)
{
	if (!head_a && !head_b)
		return ;
	ft_lst_rotate(head_a);
	ft_lst_rotate(head_b);
}