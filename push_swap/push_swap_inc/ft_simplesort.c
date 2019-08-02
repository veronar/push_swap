/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 09:04:05 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/02 15:30:32 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

int			ft_is_ascending(t_dlist **head)
{
	t_dlist	*current;
	t_dlist	*second;

	current = *head;
	second = current->next;
	while (second != NULL)
	{
		if (second->n < current->n)
			return (0);
		current = current->next;
		second = second->next;
	}
	return (1);
}

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

void		ft_small_to_top(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*small;
	//t_dlist	*a_first;

	//a_first = *head_a;
	small = ft_smallest(head_a);
	while (small->n != (*head_a)->n)
		ft_lst_rot(head_a);
	if (ft_is_ascending(head_a) == 1)
		exit(1);
	else 
		ft_push_to_b(head_a, head_b);
}