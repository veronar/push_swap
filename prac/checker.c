/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:16 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/22 16:36:51 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

void		ft_lst_del(j_list **head) /// Test!
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
}

int			ft_error(j_list **head)
{
	ft_lst_del(head);
	ft_putendl("Error");
	sleep(60);
	exit(1);
	// return (-1);
}

int			main(int ac, char **av)
{
	j_list	*head_a;
	j_list	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (ac == 1)
		return (0);
	if (ft_init_list(ac, av, &head_a) == 0)
	{
		
		return (ft_error(&head_a));
	}
	head_b = NULL;
	//ft_print_stack(&head_a);
	//ft_lst_rev_rot(&head_a);
	ft_read_op(&head_a, &head_b);
	//ft_print_stack(&head_a);
	sleep(60);
	return (0);
}