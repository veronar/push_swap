/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortlists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 10:47:13 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/13 16:54:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

/*
** ft_2list: for list of size 2
** if not sorted, sa, and return
*/

void		ft_2list(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	if (ft_check_sort(head_a, head_b) == 1)
		return ;
	ft_lst_swap(head_a);
	ft_check_flags(head_a, head_b, flags);
	ft_putstr("sa");
	ft_putchar('\n');
	return ;
}

/*
** ft_3list: checks if arguments are sorted, if it is just return 1.
** check if they are descending order, then apply "sa" & "rra"
** else it calls ft_small_to_top, which finds the smallest, puts
** at tope of the list, then checks sort. If not sorted it calls "pb"
** to push that number to stack B.
** it then checks if the first number in stack A is larger than the second,
** if it is it calls "sa" to swap them, and then calls "pa" to push the number
** that was pushed to stack B, back to stack A.
** with the case of 3 numbers, this stack should be sorted now.
*/

int			ft_3list(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	t_dlist	*first;
	t_dlist	*second;
	t_dlist	*last;

	first = *head_a;
	second = first->next;
	last = second->next;
	if (ft_check_sort(head_a, head_b) == 1)
		return (1);
	if ((first->n > second->n) && (second->n > last->n))
	{
		ft_push_swapa(head_a, head_b, flags);
		ft_push_revrota(head_a, head_b, flags);
		return (1);
	}
	if (ft_small_to_top(head_a, head_b, flags) == 1)
		if (ft_check_sort(head_a, head_b) == 1)
			return (1);
	if ((*head_a)->n > (*head_a)->next->n)
		ft_push_swapa(head_a, head_b, flags);
	ft_push_pa(head_a, head_b, flags);
	return (ft_check_sort(head_a, head_b));
}

/*
** ft_small_pos: (only used in 5list sort) takes the list and a pointer
** to the smallest value in that list. It returns the numerical
** index of that number in the list.
*/

int			ft_small_pos(t_dlist **head_a, t_dlist *smallest)
{
	int		pos;
	t_dlist	*temp;

	temp = *head_a;
	pos = 0;
	if (temp->n == smallest->n)
		return (1);
	while (temp->n != smallest->n)
	{
		pos++;
		temp = temp->next;
	}
	return (pos);
}

/*
** ft_small_top5: very similar to ft_small_to_top, this is just
** adjusted for a larger list. Finds the smallest node, uses the smallest
** node pointer to find its position in the list.
** if that position is in the first half it will apply "ra" to get that
** number to the top of the stack, if the number is in the second half
** it will apply "rra" to get that number to the top of the stack.
** this helps it to do it in less moves.
** As with ft_small_to_top it will either check sort or "pb".
*/

int			ft_small_top_5(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	t_dlist	*small;
	int		pos;

	small = ft_smallest(head_a);
	pos = ft_small_pos(head_a, small);
	if (pos > (ft_lst_size(head_a) / 2))
	{
		while (small->n != (*head_a)->n)
			ft_push_revrota(head_a, head_b, flags);
	}
	else
	{
		while (small->n != (*head_a)->n)
			ft_push_rota(head_a, head_b, flags);
	}
	if (ft_is_ascending(head_a) == 1)
		return (1);
	ft_push_pb(head_a, head_b, flags);
	return (0);
}

/*
** ft_5list: checks the sort. finds the smallest two numbers in stack A.
** Pushes them to B with "pb" (in order, ie B is in descending order),
** then applies the 3list sort on the rest of the stack (there will be
** 3 left after applying "pb" twice). It then applies "pa" on the 2
** numbers in stack B, this will mean that stack A is now sorted.
*/

int			ft_5list(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	if (ft_check_sort(head_a, head_b) == 1)
		return (1);
	while (ft_lst_size(head_a) > 3)
	{
		if (ft_small_top_5(head_a, head_b, flags) == 1)
		{
			if (ft_check_sort(head_a, head_b) == 1)
				return (1);
		}
	}
	ft_3list(head_a, head_b, flags);
	while (*head_b != NULL)
		ft_push_pa(head_a, head_b, flags);
	return (ft_check_sort(head_a, head_b));
}
