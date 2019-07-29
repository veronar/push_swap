/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:20:57 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/23 14:46:10 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

void		ft_print_stack(j_list **head)
{
	j_list	*start;

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

void		ft_rev_print_stack(j_list **head)
{
	j_list	*end;
	j_list	*start;

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
