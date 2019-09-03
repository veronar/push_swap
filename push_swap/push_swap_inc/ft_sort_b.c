/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 12:29:13 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/02 13:48:24 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_b(t_dlist **head_a, t_dlist **head_b)
{
	int	b_len;
	int i;

	if (ft_is_descending(head_b) == 1)
	{
		//while (*head_b != NULL)
		//	ft_push_pa(head_a, head_b);
		return ;
	}
	b_len = ft_lst(head_b);
	i = b_len;
	while (i > b_len - 5)
	{
		ft_big_to_top(head_b);
	}
}
