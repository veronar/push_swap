/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:32:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/30 10:08:09 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

/*
** ft_lst_rotate: shifts UP all positions of the stack by 1
** first one becomes the last
*/

void		ft_lst_rot(j_list **head)
{
	j_list	*first;
	j_list	*second;
	j_list	*last;

	if (*head == NULL || (*head)->next == NULL)
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

/*
** ft_lst_rotate_both: shifts UP all positions of the stack by 1
** first one becomes the last. Apply this to both stack a and stack b
*/

void		ft_lst_rot_ab(j_list **head_a, j_list **head_b)
{
	if (!head_a && !head_b)
		return ;
	ft_lst_rot(head_a);
	ft_lst_rot(head_b);
}
