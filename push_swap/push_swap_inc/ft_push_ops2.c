/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_ops2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:55:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/12 11:54:48 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

void		ft_push_rota(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_rot(head_a);
	ft_check_flags(head_a, head_b, flags);
	ft_putstr("ra");
	ft_putchar('\n');
}

void		ft_push_rotb(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_rot(head_b);
	ft_check_flags(head_a, head_b, flags);
	ft_putstr("rb");
	ft_putchar('\n');
}

void		ft_push_rotab(t_dlist **head_a, t_dlist **head_b, t_env **flags)
{
	ft_lst_rot_ab(head_a, head_b);
	ft_check_flags(head_a, head_b, flags);
	ft_putstr("rr");
	ft_putchar('\n');
}
