/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 14:36:22 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/02 08:46:08 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

/*
** ft_3lst: for list of size 3
** push?
*/

void		ft_3list(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*top;

	if (ft_check_sort(head_a, head_b) == 1)
		return ;
	top = *head_a;
	if (top->n > top->next->n)
	{
		
		ft_lst_swap(head_a);
}