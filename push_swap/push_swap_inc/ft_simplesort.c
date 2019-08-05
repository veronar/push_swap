/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 09:04:05 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/05 10:46:51 by vesingh          ###   ########.fr       */
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

int		ft_small_to_top(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*small;

	small = ft_smallest(head_a);
	while (small->n != (*head_a)->n)
	{
		ft_lst_rot(head_a);
		ft_putstr("ra");
		ft_putchar('\n');
	}
	if (ft_is_ascending(head_a) == 1)
		return (1);
	ft_push_to_b(head_a, head_b);
	ft_putstr("pb");
	ft_putchar('\n');
	return (0);
}

void		ft_sortsize(t_dlist **head_a, t_dlist **head_b)
{
	size_t	lstlen;

	lstlen = ft_lst_size(head_a);
	if (lstlen == 0)
		ft_error(head_a);
	else if (lstlen == 1)
		return ;
	else if (lstlen == 2)
		ft_2list(head_a, head_b);
	else if (lstlen == 3)
		ft_3list(head_a, head_b);
	else if (lstlen == 5)
		ft_5list(head_a, head_b);
}
