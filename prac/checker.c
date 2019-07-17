/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/17 12:37:51 by vesingh          ###   ########.fr       */
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
	j_list	*head;
	j_list	*test;

	if (ac == 1)
		return (0);
	if (!(head = ft_init_list(ac, av)))
		return (ft_error());
	test = head;
	ft_print_stack(&test);
	ft_lst_rev_rot(&test);
	ft_print_stack(&test);
	return (0);
}