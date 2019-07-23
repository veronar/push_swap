/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 09:01:27 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/23 12:38:43 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

void		ft_lst_del(j_list **head)
{
	j_list	*current;
	j_list	*second;

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

/* void		ft_lst_del(j_list **head) /// Test!
{
	j_list	*temp1;
	j_list	*temp2;

	if (*head == NULL)
		return ;
	temp1 = *head;
	temp2 = temp1->next;
	while (temp2 != NULL)
	{
		temp1->next = NULL;
		ft_memdel((void**)&temp1);
		temp1 = temp2;
		temp2 = temp2->next;
	}
	free(temp1);
	*head = NULL;
}*/

int			ft_error(j_list **head)
{
	ft_lst_del(head);
	ft_putendl("Error");
	sleep(60);
	exit(1);
	// return (-1);
}
