/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/02 08:46:30 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../checker_inc/checker.h"
#include "../libft/libft.h"

int			main(int ac, char **av)
{
	t_dlist	*head_a;
	t_dlist	*head_b;
	size_t	len;

	head_a = NULL;
	head_b = NULL;
	if (ac == 1)
		return (0);
	if (ft_init_list(ac, av, &head_a) == 0)
		return (ft_error(&head_a));
	//ft_read_op(&head_a, &head_b);
	ft_putstr("Stack A = ");
	len = ft_lst_size(&head_a);
	ft_putnbr(len);
	ft_putchar('\n');
	
	return (0);
}
