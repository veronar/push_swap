/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:09:27 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/05 16:20:31 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

int			ft_frans_list(t_dlist **head_a, t_dlist **head_b)
{
	if (ft_check_sort(head_a, head_b) == 1)
		return (1);
	while (ft_lst_size(head_a) > 1)
	{
		if (ft_small_top_5(head_a, head_b) == 1)
			break ;
	}
	while (*head_b != NULL)
		ft_push_pa(head_a, head_b);
	return (ft_check_sort(head_a, head_b));
}
