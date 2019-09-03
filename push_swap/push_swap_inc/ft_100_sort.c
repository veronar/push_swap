/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_100_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modo <modo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 11:58:43 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/03 14:25:55 by modo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushback_b(t_dlist **head_a, t_dlist **head_b, int i, int range)
{
	t_dlist	*large;
	int	pos;
	int	lstlen;

	pos = 0;
	lstlen = ft_lst_size(head_b);
	while (*head_b != NULL)
	{
		while (i > 0 && i >= range - 5)
		{
			pos = ft_normlargepos(head_b, i);
			large = ft_normlarge(head_b, i);
			if (pos > lstlen / 2)
				while (large->norm != (*head_b)->norm)
					ft_push_revrotb(head_b);
			else
				while (large->norm != (*head_b)->norm)
					ft_push_rotb(head_b);
			ft_push_pa(head_a, head_b);
			i--;
		}
		range = range - 5;
	}
}

void	ft_100_sort(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*stack_a;
	int		i;
	int		range;

	i = 1;
	range = 0;
	while (*head_a != NULL)
	{
		range = range + 20;
		while (i <= range)
		{
			stack_a = *head_a;
			if (stack_a == NULL)
				break ;
			if (stack_a->norm <= range)
			{
				/*if (ft_norm_pos(head_a, stack_a->norm) > lstlen / 2)
					while (stack_a->norm != (*head_a)->norm)
						ft_push_revrota(head_a);
				else
					while (stack_a->norm != (*head_a)->norm)
						ft_push_rota(head_a);*/
				
				ft_push_pb(head_a, head_b);
				i++;
			}
			else 
				ft_push_rota(head_a);
		}
	}
	i--;
	printf("i = %i\n", i);
	ft_pushback_b(head_a, head_b, i, range);
}
