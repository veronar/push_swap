/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 10:50:38 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/02 08:40:21 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../libft/libft.h"

/*
** ft_newnode_b: creates the headnode (starts the list) for stack b
** Take an int as an argument and stores it in the headnode
** ->next && ->prev are equal to NULL as it is head and only node
*/

t_dlist		*ft_newnode_b(int a)
{
	t_dlist	*new;

	if (!(new = ft_memalloc(sizeof(t_dlist))))
		return (NULL);
	new->prev = NULL;
	new->n = a;
	new->next = NULL;
	return (new);
}

/*
** ft_init_list_b: only initialised by push_to_b / push_new_b
*/

t_dlist		*ft_init_list_b(int b)
{
	t_dlist	*head_b;

	if (!(head_b = ft_newnode_b(b)))
		return (NULL);
	return (head_b);
}
