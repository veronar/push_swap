/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 09:01:27 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/13 16:42:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** ft_end_check: Last function of Checker program. Checks if head_a is sorted\
** and head_b is empty. Then prints OK or KO according to sort. If colour\
** flag is on then print in colour.
*/

void		ft_end_check(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	if ((*flags)->col == 0)
	{
		if (ft_check_sort(head_a, head_b) == 1)
		ft_putendl("OK");
	else
		ft_putendl("KO");
	}
	else if ((*flags)->col == 1)
	{
		if (ft_check_sort(head_a, head_b) == 1)
		ft_putstr_col_fd(GREEN, "OK\n", 1);
	else
		ft_putstr_col_fd(RED, "KO\n", 1);
	}
}

/*
** frees all nodes in a list
*/

void		ft_lst_del(t_dlist **head)
{
	t_dlist	*current;
	t_dlist	*second;

	if (*head == NULL)
		return ;
	current = *head;
	while (current != NULL)
	{
		second = current->next;
		free(current);
		current = second;
	}
	*head = NULL;
}

/*
** ft_error: takes list head as parameter. Deletes the list and then prints\
** 'Error'. Exits program.
*/

int			ft_error(t_dlist **head)
{
	ft_lst_del(head);
	ft_putendl_fd("Error", 2);
	exit(1);
}

/*
** ft_usage: At flag stage if incorrect / invalid input is given.
*/

int			ft_usage(void)
{
	ft_putendl_fd("Invalid input", 2);
	exit(1);
}
