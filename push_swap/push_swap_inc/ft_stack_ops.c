/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_ops.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 11:30:55 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/13 16:54:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** ft_smallest: finds the node with the smallest integer in it.
** returns pointer to said node.
*/

t_dlist		*ft_smallest(t_dlist **head_a)
{
	t_dlist	*ret;
	t_dlist	*temp;

	ret = *head_a;
	temp = ret;
	while (ret != NULL)
	{
		if (ret->n < temp->n)
			temp = ret;
		ret = ret->next;
	}
	return (temp);
}

/*
** ft_largest: finds the node with the largest integer in it.
** returns pointer to said node.
*/

t_dlist		*ft_largest(t_dlist **head)
{
	t_dlist	*ret;
	t_dlist	*temp;

	ret = *head;
	temp = ret;
	while (ret != NULL)
	{
		if (ret->n > temp->n)
			temp = ret;
		ret = ret->next;
	}
	return (temp);
}

/*
** ft_large_pos: finds the position of the node with the largest integer
** in it, returns the int value of the its position in the list.
*/

int			ft_large_pos(t_dlist **head)
{
	t_dlist	*start;
	t_dlist	*large;
	int		pos;

	start = *head;
	large = ft_largest(head);
	pos = 1;
	while (start != NULL)
	{
		if (start->n == large->n)
			break ;
		pos++;
		start = start->next;
	}
	return (pos);
}

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
