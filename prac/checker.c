/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/19 11:24:22 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

int			ft_error(void)
{
	ft_putendl("Error");
	return (-1);
}

int			main(int ac, char **av)
{
	j_list	*head_a;
	j_list	*head_b;
	j_list	*test;

	if (ac == 1)
		return (0);
	if (!(head_a = ft_init_list(ac, av)))
		return (ft_error());
	test = head_a;
	ft_print_stack(&test);
	ft_push_to_b(&head_a, &head_b);
	ft_print_stack(&head_b);
	ft_print_stack(&head_a);
	
	ft_push_to_a(&head_a, &head_b);
	ft_print_stack(&head_a);
	ft_print_stack(&head_b);
	return (0);
}