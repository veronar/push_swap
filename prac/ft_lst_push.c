/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:35:23 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/17 11:23:07 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

/*
** ft_push_to_a: take the first element at the top of b and put it at the top
** of a. Do nothing if b is empty.
*/

void		ft_push_to_a(j_list **head_a, j_list **head_b)
{
	j_list	*a_first;
	j_list	*b_first;

	if (*head_b == NULL)
		return ;
	b_first = *head_b;
	a_first = *head_a;
	*head_b = b_first->next;
	b_first->next = a_first;
	a_first->prev = b_first;
	*head_a = b_first;
	b_first->prev = NULL;
}

/*
** ft_push_to_b: take the first element at the top of a and put it at the top
** of b. Do nothing if b is empty.
*/

void		ft_push_to_b(j_list **head_a, j_list **head_b)
{
	j_list	*a_first;
	j_list	*b_first;

	if (*head_b == NULL)
		return ;
	b_first = *head_b;
	a_first = *head_a;
	*head_a = a_first->next;
	a_first->next = b_first;
	b_first->prev = a_first;
	*head_b = a_first;
	a_first->prev = NULL;
}