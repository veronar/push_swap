/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:56:33 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/19 11:04:57 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

/*
** ft_checkint: checks each character in the arguments given
** if its a digit, check next; if not a digit, return error.
*/

int			ft_checkint(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][0] == '-' || av[i][0] == '+')
				j++;
			else if (ft_isdigit(av[i][j]))
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

/*
** ft_newnode: creates a new node at the end of list
** populating it with the integer conversion of the relevant argument
*/

j_list		*ft_newnode(char *av)
{
	j_list	*new;

	if (!(new = ft_memalloc(sizeof(j_list))))
	{
		ft_error();
		return (NULL);
	}
	new->prev = NULL;
	new->n = ft_atoi(av);
	new->next = NULL;
	return (new);
}

/*
** ft_fill_list: iterates from head of list (head node)
** condition iterates from second node ie. a = 2, because we have
** already created the head node with the first (a = 1) argument
** in the initial ft_newnode call in ft_init_list
**
** first checks if there is a duplicate of the current value (argument)
** already in the list. If there isnt, create a new node and populate it
** else return error
*/

int			ft_fill_list(j_list **head, int ac, char **av, int a)
{
	j_list	*temp;
	j_list	*current;
	j_list	*prev;

	current = *head;
	while (a < ac)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			if (temp->n == ft_atoi(av[a]))
				return (0);
			temp = temp->next;
		}
		if (!(current->next = ft_newnode(av[a])))
			return (0);
		a++;
		prev = current;
		current = current->next;
		current->prev = prev;
	}
	return (1);
}

/*
** ft_init_list: takes arguments given by run of program
** 1. check arguments given are digits only; else returns error
** 2. creates head node (start of list) & fills with first
** argument (converted to integer)
** 3. fills remainder of list with remainder of arguments converted to integers
*/

j_list		*ft_init_list(int ac, char **av)
{
	j_list	*head;
	j_list	*current;
	int		a;

	a = 1;
	current = NULL;
	if (ft_checkint(av) != 1)
		return (NULL);
	if (!(head = ft_newnode(av[a])))
		return (NULL);
	current = head;
	a++;
	if (ft_fill_list(&head, ac, av, a) == 0)
		return (NULL);
	return (head);
}
