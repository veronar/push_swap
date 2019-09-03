/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_ops.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 11:30:55 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/02 11:42:39 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** ft_lst_size: get size of list of arguments given
*/

size_t		ft_lst_size(t_dlist **head)
{
	size_t	len;
	t_dlist	*lst;

	len = 0;
	if (*head == NULL)
		return (0);
	lst = *head;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*
**
*/

void		ft_addnorms(t_dlist **head_a)
{
	t_dlist	*start;
	t_dlist	*second;
	int		norm;

	start = *head_a;
	while (start != NULL)
	{
		norm = ft_lst_size(head_a);
		start->norm = norm;
		second = *head_a;
		while (second != NULL)
		{
			if (start->n < second->n)
				start->norm--;
			second = second->next;
		}
		start = start->next;
	}
}
