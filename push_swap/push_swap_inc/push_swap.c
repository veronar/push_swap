/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/11 09:38:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../checker_inc/checker.h"
#include "../libft/libft.h"

int			main(int ac, char **av)
{
	t_dlist	*head_a;
	t_dlist	*head_b;
	t_env	*flags;

	head_a = NULL;
	head_b = NULL;
	if (ac == 1)
		return (0);
	flags = NULL;
	ft_flag_args(&ac, &av, &flags);
	if (ft_init_list(ac, av, &head_a) == 0)
		return (ft_error(&head_a));
	ft_addnorms(&head_a);
	ft_sortsize(&head_a, &head_b);
	ft_lst_del(&head_a);
	ft_lst_del(&head_b);
	return (0);
}
