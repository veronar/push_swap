/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_100_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 11:58:43 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/04 12:53:53 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb_rrb(t_dlist **head_b, int pos)
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

void	ft_pushback_b(t_dlist **head_a, t_dlist **head_b, int i, int range)
{
	int	pos;

	pos = 0;
	while (*head_b != NULL)
	{
		while (i > 0 && i >= range - 5)
		{
			pos = ft_normlargepos(head_b, i);
			ft_rb_rrb(head_b, pos);
			ft_push_pa(head_a, head_b);
			i--;
		}
		range = range - 5;
	}
}

void	ft_100_sort(t_dlist **head_a, t_dlist **head_b)
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
			//printf("head_a norm = %i\n", (*head_a)->norm);
			if ((*head_a)->norm <= range)
			{
				ft_push_pb(head_a, head_b);
				//printf("head_b norm = %i\n", (*head_b)->norm);
				i++;
			}
			else
				ft_push_rota(head_a);
		}
	}
	i--;
	//ft_print_stacknorm(head_b);
	ft_pushback_b(head_a, head_b, i, range);
}
