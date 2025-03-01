/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_ops1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:48:46 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/16 09:43:04 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

/*
** ft_push_swapa: Applies the Checker function and then checks env flags
** if col & vis is off then prints "sa"
** else if opp flag is on then print last operation
** lastly if slow made is on apply usleep.
*/

void		ft_push_swapa(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_swap(head_a);
	ft_check_flags(head_a, head_b, flags);
	if ((*flags)->col == 0 && (*flags)->vis == 0)
		ft_putstr_fd("sa", 1);
	else if ((*flags)->opp == 1)
		ft_putstr_col_fd(WHITE, "Last op: sa", 1);
	ft_putchar('\n');
	if ((*flags)->slow == 1)
		usleep(SLOW);
}

/*
** ft_push_swapb: Applies the Checker function and then checks env flags
** if col & vis is off then prints "sb"
** else if opp flag is on then print last operation
** lastly if slow made is on apply usleep.
*/

void		ft_push_swapb(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_swap(head_b);
	ft_check_flags(head_a, head_b, flags);
	if ((*flags)->col == 0 && (*flags)->vis == 0)
		ft_putstr_fd("sb", 1);
	else if ((*flags)->opp == 1)
		ft_putstr_col_fd(WHITE, "Last op: sb", 1);
	ft_putchar('\n');
	if ((*flags)->slow == 1)
		usleep(SLOW);
}

/*
** ft_push_swapab: Applies the Checker function and then checks env flags
** if col & vis is off then prints "ss"
** else if opp flag is on then print last operation
** lastly if slow made is on apply usleep.
*/

void		ft_push_swapab(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_ss_swap_ab(head_a, head_b);
	ft_check_flags(head_a, head_b, flags);
	if ((*flags)->col == 0 && (*flags)->vis == 0)
		ft_putstr_fd("ss", 1);
	else if ((*flags)->opp == 1)
		ft_putstr_col_fd(WHITE, "Last op: ss", 1);
	ft_putchar('\n');
	if ((*flags)->slow == 1)
		usleep(SLOW);
}

/*
** ft_push_pa: Applies the Checker function and then checks env flags
** if col & vis is off then prints "pa"
** else if opp flag is on then print last operation
** lastly if slow made is on apply usleep.
*/

void		ft_push_pa(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_push_to_a(head_a, head_b);
	ft_check_flags(head_a, head_b, flags);
	if ((*flags)->col == 0 && (*flags)->vis == 0)
		ft_putstr_fd("pa", 1);
	else if ((*flags)->opp == 1)
		ft_putstr_col_fd(WHITE, "Last op: pa", 1);
	ft_putchar('\n');
	if ((*flags)->slow == 1)
		usleep(SLOW);
}

/*
** ft_push_pb: Applies the Checker function and then checks env flags
** if col & vis is off then prints "pb"
** else if opp flag is on then print last operation
** lastly if slow made is on apply usleep.
*/

void		ft_push_pb(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_push_to_b(head_a, head_b);
	ft_check_flags(head_a, head_b, flags);
	if ((*flags)->col == 0 && (*flags)->vis == 0)
		ft_putstr_fd("pb", 1);
	else if ((*flags)->opp == 1)
		ft_putstr_col_fd(WHITE, "Last op: pb", 1);
	ft_putchar('\n');
	if ((*flags)->slow == 1)
		usleep(SLOW);
}
