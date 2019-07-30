/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 14:36:22 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/30 14:42:46 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

/*
** ft_3lst: for list of size 3
** push?
*/

void		ft_3list(j_list **head_a, j_list **head_b)
{
	j_list	*top;

	if (ft_check_sort(head_a, head_b) == 1)
		return ;
	top = *head_a;
	if (top->n > top->next->n)
	{
		
		ft_lst_swap(head_a);
}