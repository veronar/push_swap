/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 10:20:31 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/30 14:13:30 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../checker_inc/checker.h"
#include "../libft/libft.h"

/*
** ft_lst_size: get size of list of arguments given
*/

size_t		ft_lst_size(j_list **head)
{
	size_t	len;
	j_list	*lst;

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
