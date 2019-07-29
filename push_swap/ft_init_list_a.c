/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:56:33 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/29 11:06:53 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

/*
** ft_newnode: creates a new node at the end of list
** populating it with the integer conversion of the relevant argument
*/

j_list		*ft_newnode(char *av)
{
	j_list		*new;
	long long	num;

	num = ft_atoll(av);
	if (num < -2147483648 || num > 2147483647)
		return (NULL);
	if (!(new = ft_memalloc(sizeof(j_list))))
		return (NULL);
	new->prev = NULL;
	new->n = ft_atoi(av);
	new->next = NULL;
	return (new);
}

/*
** ft_fill_list_inner: ft_fill_list got over 25 lines long.
** function contains core of ft_fill_list, which iterates over white space
** in the given argument to malloc only for real numbers
*/

int			ft_fill_list_inner(char **av, int *a, int *i, j_list **new_node)
{
	if (!(*new_node = ft_newnode(&av[*a][*i])))
		return (0);
	if (av[*a][*i] == '-' || av[*a][*i] == '+')
		*i = *i + 1;
	while (av[*a][*i] != '\0' && ft_isdigit(av[*a][*i]))
		*i = *i + 1;
	while (av[*a][*i] != '\0' && av[*a][*i] == ' ')
		*i = *i + 1;
	return (1);
}

/*
** ft_assign_newnode: after mallocing for the new_node;
** if head == NULL assign newnode to head, else make it the next element
** in the list.
*/

void		ft_assign_newnode(j_list **head, j_list **current, \
j_list **new_node)
{
	if (*head == NULL)
	{
		*head = *new_node;
		*current = *new_node;
	}
	else
	{
		(*current)->next = *new_node;
		(*current)->next->prev = *current;
		*current = (*current)->next;
	}
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
	j_list	*current;
	int		i;
	j_list	*new_node;

	current = *head;
	while (a < ac)
	{
		i = 0;
		while (av[a][i] == ' ')
			i++;
		while (av[a][i] != '\0')
		{
			if (ft_fill_list_inner(av, &a, &i, &new_node) == 0)
				return (0);
			ft_assign_newnode(head, &current, &new_node);
		}
		a++;
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

int			ft_init_list(int ac, char **av, j_list **head)
{
	j_list	*current;
	int		a;

	a = 1;
	current = NULL;
	if (ft_checkint(av) != 1)
		return (0);
	if (ft_fill_list(head, ac, av, a) == 0)
		return (0);
	if (ft_check_dup(head) == -1)
		return (0);
	return (1);
}