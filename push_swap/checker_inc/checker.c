/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/12 10:43:43 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int			main(int ac, char **av)
{
	t_dlist	*head_a;
	t_dlist	*head_b;
	t_env	*flags;

	head_a = NULL;
	head_b = NULL;
	flags = (t_env*)malloc(sizeof(t_env));
	if (ac == 1)
		return (0);
	ft_flag_args(&ac, &av, &flags);
	if (ft_init_list(ac, av, &head_a) == 0)
		return (ft_error(&head_a));
	ft_addnorms_checker(&head_a);
	ft_read_op(&head_a, &head_b, &flags);
	return (0);
}
