/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:20:57 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/02 11:39:46 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../libft/libft.h"

void		ft_print_stack(t_dlist **head)
{
	t_dlist	*start;

	start = *head;
	while (start != NULL)
	{
		ft_putstr("n = ");
		ft_putnbr(start->n);
		ft_putchar('\n');
		start = start->next;
	}
	ft_putchar('\n');
}

void		ft_rev_print_stack(t_dlist **head)
{
	t_dlist	*end;
	t_dlist	*start;

	start = *head;
	while (start->next != NULL)
		start = start->next;
	end = start;
	while (end != NULL)
	{
		ft_putstr("n = ");
		ft_putnbr(end->n);
		ft_putchar('\n');
		end = end->prev;
	}
	ft_putchar('\n');
}

void		ft_print_stacknorm(t_dlist **head)
{
	t_dlist	*start;

	start = *head;
	while (start != NULL)
	{
		ft_putstr("n = ");
		ft_putnbr(start->n);
		ft_putchar('\n');
		ft_putstr("norm = ");
		ft_putnbr(start->norm);
		ft_putchar('\n');
		ft_putchar('\n');
		start = start->next;
	}
	ft_putchar('\n');
}
