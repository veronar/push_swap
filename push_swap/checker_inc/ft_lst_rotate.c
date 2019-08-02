/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:32:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/02 08:45:04 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../libft/libft.h"

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
