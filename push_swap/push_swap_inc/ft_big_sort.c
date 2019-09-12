/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:09:27 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/12 11:24:37 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

/*
** ft_big_list: check if list if sorted, if not then applied one of the big_sort
** algorithms, which in this case only caters to 100 numbers or 500 numbers.
** other numbers will also be sorted. if larger then 100 number then 500_sort
** is used.
*/

int			ft_big_list(t_dlist **head_a, t_dlist **head_b, int lstlen,\
			t_env **flags)
{
	if (ft_check_sort(head_a, head_b) == 1)
		return (1);
	if (lstlen < 101)
		ft_100_sort(head_a, head_b, flags);
	else
		ft_500_sort(head_a, head_b, flags);
	if (ft_check_sort(head_a, head_b) == 0)
	{
		ft_lst_del(head_b);
		ft_error(head_a);
	}
	return (ft_check_sort(head_a, head_b));
}

/*
** ft_rb_rrb: based on the position recieved, it wourks out if rb or rrb should
** be used. If position is in the second half then reverse rotate B so many
** times, else if it in the first half, rotate B x times.
*/

void		ft_rb_rrb(t_dlist **head_b, int pos)
{
	int	lstlen;

	lstlen = ft_lst_size(head_b);
	if (pos > lstlen / 2)
	{
		pos = lstlen - pos;
		while (pos != 0)
		{
			ft_push_revrotb(head_b);
			pos--;
		}
	}
	else if (pos <= lstlen / 2)
	{
		while (pos != 0)
		{
			ft_push_rotb(head_b);
			pos--;
		}
	}
}

/*
** ft_pushback_b: takes the head of both stacks; the i value which is how
** many elements are in stack b; and takes the range which is the last
** range limit of the amount of numbers pushed to B.
** The in chunks of 5 (range - 5)it pushes the largest number back to Stack A
** This largest number is based on the norm value, which should be the same
** as i.
*/

void		ft_pushback_b(t_dlist **head_a, t_dlist **head_b, int i, int range,\
			t_env **flags)
{
	int	pos;

	pos = 0;
	while (*head_b != NULL)
	{
		while (i > 0 && i >= range - 5)
		{
			pos = ft_normlargepos(head_b, i);
			ft_rb_rrb(head_b, pos);
			ft_push_pa(head_a, head_b, flags);
			i--;
		}
		range = range - 5;
	}
}

/*
** ft_100_sort: divides the numbers into chunks. These chunks are based on the
** 'norm' values. the range for 100 sort is 20, we check for the norm values
** within this range and push to B, if not in this range then rotate A and
** check the next. then we add the next 20 to range and repeat the process.
** This way we are kinda of sorting the list by chunks of 20 numbers.
*/

void		ft_100_sort(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	int		i;
	int		range;

	i = 1;
	range = 0;
	while (*head_a != NULL)
	{
		range = range + 20;
		while (i <= range)
		{
			if (*head_a == NULL)
				break ;
			if ((*head_a)->norm <= range)
			{
				ft_push_pb(head_a, head_b);
				i++;
			}
			else
				ft_push_rota(head_a);
		}
	}
	i--;
	ft_pushback_b(head_a, head_b, i, range, flags);
}

/*
** ft_500_sort: same function as ft_100_sort, range chunks are just a different
** number, instead of 20 at a time, we now check 44 at a time.
*/

void		ft_500_sort(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	t_dlist	*stack_a;
	int		i;
	int		range;

	i = 1;
	range = 0;
	while (*head_a != NULL)
	{
		range = range + 44;
		while (i <= range)
		{
			stack_a = *head_a;
			if (stack_a == NULL)
				break ;
			if (stack_a->norm <= range)
			{
				ft_push_pb(head_a, head_b);
				i++;
			}
			else
				ft_push_rota(head_a);
		}
	}
	i--;
	ft_pushback_b(head_a, head_b, i, range, flags);
}
