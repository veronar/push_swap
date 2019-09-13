/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:32:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/13 16:43:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** ft_lst_rotate: shifts UP all positions of the stack by 1
** first one becomes the last
*/

void		ft_lst_rot(t_dlist **head)
{
	t_dlist	*first;
	t_dlist	*second;
	t_dlist	*last;

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

void		ft_lst_rot_ab(t_dlist **head_a, t_dlist **head_b)
{
	if (!head_a && !head_b)
		return ;
	ft_lst_rot(head_a);
	ft_lst_rot(head_b);
}

/*
** ft_lst_rev_rot: shifts UP all positions of the stack by 1
** first one becomes the last
*/

void		ft_lst_rev_rot(t_dlist **head)
{
	t_dlist	*first;
	t_dlist	*last;
	t_dlist	*second_last;

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

void		ft_lst_rev_rot_ab(t_dlist **head_a, t_dlist **head_b)
{
	if (!head_a && !head_b)
		return ;
	ft_lst_rot(head_a);
	ft_lst_rot(head_b);
}
