/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:56:33 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/15 12:47:13 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

int		ft_error(void)
{
	ft_putendl("Error");
	return (-1);
}

int		ft_checkint(char **av)
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
			if (ft_isdigit(av[i][j]))
				j++;
			else
				ft_error();
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

j_list		*ft_init_list(int ac, char **av)
{
	j_list	*head;
	j_list	*current;
	j_list	*temp;
	int		a;

	a = 1;
	current = NULL;
	if (ft_checkint(av) != 1)
		return (NULL);
	current = ft_newnode(av[a]);
	if (current == NULL)
		return (current);
	head = current;
	a++;
	while (a < ac)
	{
		temp = head;
		while (temp != NULL)
		{	
			if (temp->n == ft_atoi(av[a]))
				return (NULL);
			temp = temp->next;
		}
		if (!(current->next = ft_newnode(av[a])))
			return (NULL);
		a++;
		current = current->next;
	}
	return (head);
}

int		main(int ac, char **av)
{
	j_list	*head;

	if (ac == 1)
		return (0);
	if (!(head = ft_init_list(ac, av)))
		return (ft_error());
	while (head != NULL)
	{
		printf("n = %d\n", head->n);
		head = head->next;
	}
	return (0);
}
