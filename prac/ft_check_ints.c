/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ints.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 08:02:59 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/23 08:05:07 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

/*
** ft_checkdup: checks each number in the list for duplicates
** return -1 if there is duplicate
*/

int			ft_check_dup(j_list **head)
{
	j_list	*to_check;
	j_list	*ptr;

	to_check = *head;
	while (to_check->next != NULL)
	{
		ptr = to_check->next;
		while (ptr != NULL)
		{
			if (ptr->n == to_check->n)
				return (-1);
			ptr = ptr->next;
		}
		to_check = to_check->next;
	}
	return (1);
}

/*
** ft_checkint: checks each character in the arguments given
** if its a digit, check next; if not a digit, return error.
*/

int			ft_checkint(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j] != '\0' && (av[i][j] == ' ' || av[i][j] == '\t'))
			j++;
		if (av[i][j] == '\0')
			return (0);
		while (av[i][j] != '\0')
		{
			if (av[i][j] != '\0' && (av[i][j] == '-' || av[i][j] == '+'))
				j++;
			if (av[i][j] == '\0' || ft_isdigit(av[i][j]) == 0)
				return (0);
			while (av[i][j] != '\0' && ft_isdigit(av[i][j]))
				j++;
			if (av[i][j] != '\0' && av[i][j] != ' ' && av[i][j] != '\t')
				return (0);
			while (av[i][j] != '\0' && (av[i][j] == ' ' || av[i][j] == '\t'))
				j++;
		}
		i++;
	}
	return (1);
}
