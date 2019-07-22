/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 10:50:38 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/22 16:42:24 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

/*
** ft_newnode_b: creates the headnode (starts the list) for stack b
** Take an int as an argument and stores it in the headnode
** ->next && ->prev are equal to NULL as it is head and only node
*/

j_list		*ft_newnode_b(int a)
{
	j_list	*new;

	if (!(new = ft_memalloc(sizeof(j_list))))
		return (NULL);
	new->prev = NULL;
	new->n = a;
	new->next = NULL;
	return (new);
}

/*
** ft_init_list_b: only initialised by push_to_b
*/

j_list		*ft_init_list_b(int b)
{
	j_list	*head_b;

	if (!(head_b = ft_newnode_b(b)))
		return (NULL);
	return (head_b);
}