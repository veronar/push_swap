/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:32:25 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/16 09:28:00 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** ft_check_flags: checks if colour or visual flag is on, if it is then print
** the stacks. This is called after each move is done.
** Then checks if moves flag is on, if it is then adds to the move counter.
*/

void		ft_check_flags(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	if ((*flags)->col == 1)
		ft_print_stackcol(head_a, head_b);
	else if ((*flags)->vis == 1)
		ft_print_stackboth(head_a, head_b);
	if ((*flags)->moves != -1)
		(*flags)->moves++;
}

/*
** ft_check_sort: check the n values of each node in list.
** if not sorted in ascending order, return 0;
*/

int			ft_check_sort(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*current;
	t_dlist	*second;

	if (*head_b != NULL)
		return (0);
	current = *head_a;
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

/*
** ft_do_op: compares get_next_line arguments from terminal to list of
** possible operations to be done. Executes operations.
*/

int			ft_do_op(char *line, t_dlist **head_a, t_dlist **head_b)
{
	if (ft_strcmp(line, "sa") == 0)
		ft_lst_swap(head_a);
	else if (ft_strcmp(line, "sb") == 0)
		ft_lst_swap(head_b);
	else if (ft_strcmp(line, "ss") == 0)
		ft_ss_swap_ab(head_a, head_b);
	else if (ft_strcmp(line, "pa") == 0)
		ft_push_to_a(head_a, head_b);
	else if (ft_strcmp(line, "pb") == 0)
		ft_push_to_b(head_a, head_b);
	else if (ft_strcmp(line, "ra") == 0)
		ft_lst_rot(head_a);
	else if (ft_strcmp(line, "rb") == 0)
		ft_lst_rot(head_b);
	else if (ft_strcmp(line, "rr") == 0)
		ft_lst_rot_ab(head_a, head_b);
	else if (ft_strcmp(line, "rra") == 0)
		ft_lst_rev_rot(head_a);
	else if (ft_strcmp(line, "rrb") == 0)
		ft_lst_rev_rot(head_b);
	else if (ft_strcmp(line, "rrr") == 0)
		ft_lst_rev_rot_ab(head_a, head_a);
	else
		return (-1);
	return (1);
}

/*
** ft_flag_moves: At end of Checker & Push_swap, called to check if moves flag\
** is is greater that > -1. If it is then prints the amount of moves as the end\
** of program. If colour flag is on it prints it in Yellow, else just prints in\
** white.
*/

void		ft_flag_moves(t_env **flags)
{
	if ((*flags)->moves > -1 && (*flags)->col == 1)
	{
		ft_putstr_col_fd(YELLOW, "Moves: ", 1);
		ft_putnbr_col_fd(YELLOW, (*flags)->moves, 1);
		ft_putchar('\n');
	}
	else if ((*flags)->moves > -1 && (*flags)->col == 0)
	{
		ft_putstr_col_fd(WHITE, "Moves: ", 1);
		ft_putnbr_col_fd(WHITE, (*flags)->moves, 1);
		ft_putchar('\n');
	}
}

/*
** ft_read_op: Reads operations from the terminal.
** calls ft_do_op to runs operations.
*/

void		ft_read_op(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	char	*line;

	line = NULL;
	ft_check_flags(head_a, head_b, flags);
	while (get_next_line(0, &line))
	{
		if (ft_do_op(line, head_a, head_b) == 1)
			ft_memdel((void **)&line);
		else
		{
			ft_lst_del(head_b);
			ft_memdel((void **)&line);
			ft_error(head_a);
		}
		ft_check_flags(head_a, head_b, flags);
	}
	ft_memdel((void**)&line);
	ft_flag_moves(flags);
	ft_end_check(head_a, head_b, flags);
	ft_lst_del(head_b);
	ft_lst_del(head_a);
	ft_memdel((void**)flags);
}
