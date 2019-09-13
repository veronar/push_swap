/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_ops3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 10:01:29 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/13 15:27:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

void		ft_push_revrota(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_rev_rot(head_a);
	ft_check_flags(head_a, head_b, flags);
	if ((*flags)->col == 0  && (*flags)->vis == 0)
		ft_putstr_fd("rra", 1);
	else if ((*flags)->opp == 1)
		ft_putstr_col_fd(WHITE, "Last op: rra", 1);
	ft_putchar('\n');
	if ((*flags)->slow == 1)
		SLOW_MODE
}

void		ft_push_revrotb(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_rev_rot(head_b);
	ft_check_flags(head_a, head_b, flags);
	if ((*flags)->col == 0  && (*flags)->vis == 0)
		ft_putstr_fd("rrb", 1);
	else if ((*flags)->opp == 1)
		ft_putstr_col_fd(WHITE, "Last op: rrb", 1);
	ft_putchar('\n');
	if ((*flags)->slow == 1)
		SLOW_MODE
}

void		ft_push_revrotab(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_rev_rot_ab(head_a, head_b);
	ft_check_flags(head_a, head_b, flags);
	if ((*flags)->col == 0  && (*flags)->vis == 0)
		ft_putstr_fd("rrr", 1);
	else if ((*flags)->opp == 1)
		ft_putstr_col_fd(WHITE, "Last op: rrr", 1);
	ft_putchar('\n');
	if ((*flags)->slow == 1)
		SLOW_MODE
}
