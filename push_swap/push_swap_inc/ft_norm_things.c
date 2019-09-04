/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_norm_things.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:18:22 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/04 13:18:27 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** ft_addnorms: adds the norm value to each number based on the integer value
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

/*
** ft_normlargepos: takes the large norm value in,, iterates through the
** stack, and returns the position of the node with that norm value.
*/

int			ft_normlargepos(t_dlist **head, int large)
{
	t_dlist	*start;
	int		pos;
	int		i;

	start = *head;
	pos = 0;
	i = 0;
	while (start != NULL)
	{
		if (start->norm == large)
		{
			pos = i;
			break ;
		}
		start = start->next;
		i++;
	}
	return (pos);
}
