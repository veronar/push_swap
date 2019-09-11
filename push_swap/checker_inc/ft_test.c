/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:20:57 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/11 13:16:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../libft/libft.h"

void		ft_print_stackboth(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*stacka;
	t_dlist *stackb;

	stacka = *head_a;
	stackb = *head_b;
	ft_putstr(" - Stack A - ");
	ft_putendl(" - Stack B - ");
	while (stacka != NULL || stackb != NULL)
	{
		if (stacka != NULL)
		{
			ft_putnbr(stacka->n);
			stacka = stacka->next;
			ft_putstr("             ");
		}
		else if (stacka == NULL)
			ft_putstr("             ");
		if (stackb != NULL)
		{
			ft_putnbr(stackb->n);
			stackb = stackb->next;
		}
		ft_putchar('\n');
	}
	ft_putchar('\n');
}

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
