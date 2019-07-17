/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:35:23 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/17 08:40:37 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

void		ft_make_head(j_list **head)
{

}

void		ft_lst_push(j_list **head, j_list *new)
{
	
}

void		ft_push_a(j_list **head_a, j_list **head_b)
{
	j_list	*temp;
	j_list	*a;
	j_list	*b;

	if (*head_b == NULL || *head_a == NULL)
		return ;
	a = head_a;
	b = head_b;
	ft_lst_push(&a, b);
}