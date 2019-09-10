/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 09:01:27 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/10 09:36:47 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../libft/libft.h"

/*
** frees all nodes in a list
*/

void		ft_lst_del(t_dlist **head)
{
	t_dlist	*current;
	t_dlist	*second;

	if (*head == NULL)
		return ;
	current = *head;
	while (current != NULL)
	{
		second = current->next;
		free(current);
		current = second;
	}
	*head = NULL;
}

int			ft_error(t_dlist **head)
{
	ft_lst_del(head);
	ft_putendl_fd("Error", 2);
	exit(1);
}

int			ft_usage(void)
{
	ft_putendl_fd("Invalid option", 2);
	exit(1);
}
