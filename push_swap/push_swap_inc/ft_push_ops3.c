/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_ops3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 10:01:29 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/12 11:16:54 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

void		ft_push_revrota(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_check_flags(head_a, head_b, flags);
	ft_lst_rev_rot(head_a);
	ft_putstr("rra");
	ft_putchar('\n');
}

void		ft_push_revrotb(t_dlist **head_b)
{
	ft_lst_rev_rot(head_b);
	ft_putstr("rrb");
	ft_putchar('\n');
}

void		ft_push_revrotab(t_dlist **head_a, t_dlist **head_b)
{
	ft_lst_rev_rot_ab(head_a, head_b);
	ft_putstr("rrr");
	ft_putchar('\n');
}
