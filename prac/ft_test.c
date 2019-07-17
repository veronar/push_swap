/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:20:57 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/17 10:46:18 by vesingh          ###   ########.fr       */
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
	 	// printf("n = %d\n", start->n);
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
	 	// printf("n = %d\n", start->n);
		end = end->prev;
	}
	ft_putchar('\n');
}

/* 
** int		main(int ac, char **av)
** {
** 	j_list	*current;
** 	int		a;
** 	j_list	*head;
** 	
** 	a = 2;
** 	if (ac == 1)
** 		return 0;
** 	current = malloc(sizeof(j_list));
** 	current->n = ft_atoi(av[1]);
** 	current->next = NULL;
** 	head = current;
** 	while (a < ac)
** 	{
** 		while (current->next != NULL)
** 			current = current->next;
** 		current->next = (j_list*)malloc(sizeof(j_list));
** 		if (current->next == NULL)	
** 			return (0);
** 		current->next->n = atoi(av[a]);
** 		current->next->next = NULL;
** 		a++;
** 		current = current->next;
** 	}
** 	while (head != NULL)
** 	{
** 		printf("n = %d\n", head->n);
** 		head = head->next;
** 	}
** 	return (0);
** }
*/