/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/12 10:56:21 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../checker_inc/checker.h"

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
	ft_addnorms(&head_a);
	ft_sortsize(&head_a, &head_b, &flags);
	ft_lst_del(&head_a);
	ft_lst_del(&head_b);
	//sleep(60);
	//ft_memdel((void**)flags);
	return (0);
}
