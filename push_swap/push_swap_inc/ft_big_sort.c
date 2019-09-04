/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:09:27 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/04 13:13:23 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

int			ft_big_list(t_dlist **head_a, t_dlist **head_b, int lstlen)
{
	if (ft_check_sort(head_a, head_b) == 1)
		return (1);
	if (lstlen < 101)
		ft_100_sort(head_a, head_b);
	else
		ft_500_sort(head_a, head_b);
	if (ft_check_sort(head_a, head_b) == 0)
	{
		ft_lst_del(head_b);
		ft_error(head_a);
	}
	return (ft_check_sort(head_a, head_b));
}
