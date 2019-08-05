/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_ops2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:55:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/05 10:01:13 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

void		ft_push_rota(t_dlist **head_a)
{
	ft_lst_rot(head_a);
	ft_putstr("ra");
	ft_putchar('\n');
}

void		ft_push_rotb(t_dlist **head_b)
{
	ft_lst_rot(head_b);
	ft_putstr("rb");
	ft_putchar('\n');
}

void		ft_push_rotab(t_dlist **head_a, t_dlist **head_b)
{
	ft_lst_rot_ab(head_a, head_b);
	ft_putstr("rr");
	ft_putchar('\n');
}
