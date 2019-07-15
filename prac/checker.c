/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/15 16:30:01 by vesingh          ###   ########.fr       */
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

	if (ac == 1)
		return (0);
	if (!(head = ft_init_list(ac, av)))
		return (ft_error());
	while (head != NULL)
	{
		printf("n = %d\n", head->n);
		head = head->next;
	}
	return (0);
}