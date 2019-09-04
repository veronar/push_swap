/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 16:09:27 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/04 06:55:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"


int			ft_big_list(t_dlist **head_a, t_dlist **head_b, size_t lstlen)
{
	if (ft_check_sort(head_a, head_b) == 1)
		return (1);
	if (lstlen <= 100)
		ft_100_sort(head_a, head_b);
	else //if (lstlen > 100 && lstlen <= 500)
		ft_500_sort(head_a, head_b);
	//else
	//	ft_large_sort(head_a, head_b);
	/*
	if (ft_check_sort(head_a, head_b) == 1)
		return (1);
	while (ft_lst_size(head_a) > 1)
	{
		if (ft_small_top_5(head_a, head_b) == 1)
			break ;
	}
	while (*head_b != NULL)
		ft_push_pa(head_a, head_b);
	*/
	if (ft_check_sort(head_a, head_b) == -1)
	{
		ft_lst_del(head_b);
		ft_error(head_a);	
	}
	return (ft_check_sort(head_a, head_b));
}
