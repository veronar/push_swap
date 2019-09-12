/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_ops1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:48:46 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/12 11:27:13 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

void		ft_push_swapa(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_swap(head_a);
	ft_check_flags(head_a, head_b, flags);
	ft_putstr("sa");
	ft_putchar('\n');
}

void		ft_push_swapb(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_swap(head_b);
	ft_check_flags(head_a, head_b, flags);
	ft_putstr("sb");
	ft_putchar('\n');
}

void		ft_push_swapab(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_ss_swap_ab(head_a, head_b);
	ft_check_flags(head_a, head_b, flags);
	ft_putstr("ss");
	ft_putchar('\n');
}

void		ft_push_pa(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_push_to_a(head_a, head_b);
	ft_check_flags(head_a, head_b, flags);
	ft_putstr("pa");
	ft_putchar('\n');
}

void		ft_push_pb(t_dlist **head_a, t_dlist **head_b)
{
	ft_push_to_b(head_a, head_b);
	ft_putstr("pb");
	ft_putchar('\n');
}
