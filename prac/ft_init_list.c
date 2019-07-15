/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:56:33 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/15 16:29:57 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

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

j_list		*ft_newnode(char *av)
{
	j_list	*new;

	if (!(new = ft_memalloc(sizeof(j_list))))
	{
		ft_error();
		return (NULL);
	}
	new->n = ft_atoi(av);
	new->next = NULL;
	return (new);
}

int			ft_fill_list(j_list *head, int ac, char **av, int a)
{
	j_list	*temp;
	j_list	*current;

	current = head;
	while (a < ac)
	{
		temp = head;
		while (temp != NULL)
		{
			if (temp->n == ft_atoi(av[a]))
				return (0);
			temp = temp->next;
		}
		if (!(current->next = ft_newnode(av[a])))
			return (0);
		a++;
		current = current->next;
	}
	return (1);
}

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
	if (ft_fill_list(head, ac, av, a) == 0)
		return (NULL);
	return (head);
}