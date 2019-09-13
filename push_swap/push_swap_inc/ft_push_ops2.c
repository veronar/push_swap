/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_ops2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:55:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/13 15:26:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

void		ft_push_rota(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_rot(head_a);
	ft_check_flags(head_a, head_b, flags);
	if ((*flags)->col == 0  && (*flags)->vis == 0)
		ft_putstr_fd("ra", 1);
	else if ((*flags)->opp == 1)
		ft_putstr_col_fd(WHITE, "Last op: ra", 1);
	ft_putchar('\n');
	if ((*flags)->slow == 1)
		SLOW_MODE
}

void		ft_push_rotb(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_rot(head_b);
	ft_check_flags(head_a, head_b, flags);
	if ((*flags)->col == 0  && (*flags)->vis == 0)
		ft_putstr_fd("rb", 1);
	else if ((*flags)->opp == 1)
		ft_putstr_col_fd(WHITE, "Last op: rb", 1);
	ft_putchar('\n');
	if ((*flags)->slow == 1)
		SLOW_MODE
}

void		ft_push_rotab(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_rot_ab(head_a, head_b);
	ft_check_flags(head_a, head_b, flags);
	if ((*flags)->col == 0  && (*flags)->vis == 0)
		ft_putstr_fd("rr", 1);
	else if ((*flags)->opp == 1)
		ft_putstr_col_fd(WHITE, "Last op: rr", 1);
	ft_putchar('\n');
	if ((*flags)->slow == 1)
		SLOW_MODE
}
