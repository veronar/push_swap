/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/01 15:49:26 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../libft/libft.h"

int			main(int ac, char **av)
{
	t_dlist	*head_a;
	t_dlist	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (ac == 1)
		return (0);
	if (ft_init_list(ac, av, &head_a) == 0)
		return (ft_error(&head_a));
	ft_read_op(&head_a, &head_b);
	return (0);
}
