/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rev_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:21:30 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/29 11:16:50 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../libft/libft.h"

/*
** ft_lst_rev_rot: shifts UP all positions of the stack by 1
** first one becomes the last
*/

void		ft_lst_rev_rot(j_list **head)
{
	j_list	*first;
	j_list	*last;
	j_list	*second_last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	first = *head;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	second_last = last->prev;
	*head = last;
	last->next = first;
	last->prev = NULL;
	first->prev = last;
	second_last->next = NULL;
}

/*
** ft_lst_rev_rot_ab: shifts UP all positions of the stack by 1
** first one becomes the last. Apply this to both stack a and stack b
*/

void		ft_lst_rev_rot_ab(j_list **head_a, j_list **head_b)
{
	if (!head_a && !head_b)
		return ;
	ft_lst_rot(head_a);
	ft_lst_rot(head_b);
}
