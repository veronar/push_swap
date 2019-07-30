/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 14:24:45 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/30 14:38:34 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

/*
** ft_2lst: for list of size 2
** if not sorted, sa, and return
*/

void		ft_2list(j_list **head_a, j_list **head_b)
{
	if (ft_check_sort(head_a, head_b) == 1)
		return ;
	ft_lst_swap(head_a);
	return ;
}
