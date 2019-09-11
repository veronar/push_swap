/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:32:25 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/11 15:07:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../libft/libft.h"

void		ft_check_flags(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	if ((*flags)->vis == 1)
		ft_print_stackboth(head_a, head_b);
	else if ((*flags)->col == 1)
		ft_print_stackcol(head_a, head_b);
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
** ft_read_op: Reads operations from the terminal.
** calls ft_do_op to runs operations.
*/

void		ft_read_op(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	char	*line;

	line = NULL;
	(void)*flags;
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
	if (ft_check_sort(head_a, head_b) == 1)
		ft_putendl("OK");
	else
		ft_putendl("KO");
	ft_lst_del(head_b);
	ft_lst_del(head_a);
}
