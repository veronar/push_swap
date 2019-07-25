/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:56:33 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/25 13:01:07 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

char		*ft_strsub_white(char **str)
{
	int		len;
	char	*ret;
	int		j;
	int 	i;

	i = 0;
	len = 0;
	j = 0;
	while (*str[i] != '\0')
	{
		if ((*str[i] == ' ' || *str[i] == '\t') && *str[i] != '\0')
			break ;
		len++;
	}
	if (!(ret = ft_memalloc(sizeof(char) * len + 1)))
		return (NULL);
	while (j < len)
	{
		ret[j] = *str[i];
		i++;
		j++;
	}
	ret[j] = '\0';
	return (ret);
}

/*
** ft_int_range: converts string to int, and then converts that int back
** into a string, compare initial string and current string, if there
** are differences then return NULL, means the strings are out of INT_MIN
** and INT_MAX range
*/

int			ft_int_range(char **av)
{
	int		val;
	char	*str;
	char	*orig;

	orig = ft_strsub_white(av);
	val = ft_atoi(orig);
	//ft_putnbr(val);
	str = ft_itoa(val);
	//ft_putendl(str);
	if (ft_strcmp(*av, str) == 0)
		return (1);
	return (0);
}

/*
** ft_newnode: creates a new node at the end of list
** populating it with the integer conversion of the relevant argument
*/

j_list		*ft_newnode(char *av)
{
	j_list	*new;
//	char	*str;

	if (ft_int_range(&av) == 0)
		return (NULL);
	if (!(new = ft_memalloc(sizeof(j_list))))
		return (NULL);
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
	j_list	*current;
	int		i;

	current = *head;
	while (a < ac)
	{
		i = 0;
		while (av[a][i] == ' ')
			i++;
		while (av[a][i] != '\0')
		{
			if (!(current->next = ft_newnode(&av[a][i])))
				return (0);
			if (av[a][i] == '-' || av[a][i] == '+')
				i++;
			while (av[a][i] != '\0' && ft_isdigit(av[a][i]))
				i++;
			while (av[a][i] != '\0' && av[a][i] == ' ')
				i++;
			current->next->prev = current;
			current = current->next;
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
	if (!(*head = ft_newnode(av[a])))
		return (0);
	current = *head;
	a++;
	if (ft_fill_list(head, ac, av, a) == 0)
		return (0);
	ft_print_stack(head);
	if (ft_check_dup(head) == -1)
		return (0);
	return (1);
}
