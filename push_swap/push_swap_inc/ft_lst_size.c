/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 10:20:31 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/02 14:49:36 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../checker_inc/checker.h"
#include "../libft/libft.h"

/*
** ft_lst_size: get size of list of arguments given
*/

size_t		ft_lst_size(t_dlist **head)
{
	size_t	len;
	t_dlist	*lst;

	len = 0;
	if (*head == NULL)
		return (0);
	lst = *head;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/*
** ft_forsize: recieves the size of the list. performs sorting
** algorithm as per size of list. ie if 3, 5, 100 or 500
*/
/* 
int			ft_forsize(t_dlist **head_a, t_dlist **head_b)
{
	size_t	len;

	if (*head_a == NULL)
		return (0);
	len = ft_list_size(head_a);
	if (len = 1)
		return (1);
	if (len = 2)
	{
		ft_2list(head_a, head_b);
		return (1);
	}
	if (len == 3)
		return (ft_3list());
	else if (len <= 5)
		return (ft_5list());
	else if (len <= 100)
		return (ft_100list());
	else
		return (ft_500list());
}*/
