/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 11:32:25 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/19 14:52:42 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

void		ft_do_op(char *line, j_list **head_a, j_list **head_b)
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
		return (0);
	return (1);
}

int			ft_read_op(j_list **head_a, j_list **head_b)
{
	char	*line;

	while (get_next_line(0, &line))
	{
		if (ft_do_op(line) == 1)
		{
			free(line);
			return (0);
		}
		free(line);
	}
	free(line);
	if (ft_check_sort(head_a) == 1 && !head_b)
		ft_putendl("OK");
	else
		ft_putendl("KO");
	return (1);
}