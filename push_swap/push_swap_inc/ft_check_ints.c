/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ints.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 08:02:59 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/30 10:03:09 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

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
** ft_checkint: function was over 25 lines long,
** added core part to new function for norminette.
** basically iterates over characters that to check that they are either
** '-' or '+' or digits.
*/

int			ft_check_int_inner(char **av, int *i, int *j)
{
	if (av[*i][*j] != '\0' && (av[*i][*j] == '-' || av[*i][*j] == '+'))
		*j = *j + 1;
	if (av[*i][*j] == '\0' || ft_isdigit(av[*i][*j]) == 0)
		return (0);
	while (av[*i][*j] != '\0' && ft_isdigit(av[*i][*j]))
		*j = *j + 1;
	if (av[*i][*j] != '\0' && av[*i][*j] != ' ' && av[*i][*j] != '\t')
		return (0);
	while (av[*i][*j] != '\0' && (av[*i][*j] == ' ' || av[*i][*j] == '\t'))
		*j = *j + 1;
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
			if (ft_check_int_inner(av, &i, &j) == 0)
				return (0);
		}
		i++;
	}
	return (1);
}

/*
** ft_atoll: converts string to 'long long'.
** we can then use this to check if the given number is within the int range.
** if it isnt within int, then error (see ft_newnode).
** long long range: [−9,223,372,036,854,775,807, +9,223,372,036,854,775,807]
*/

long long	ft_atoll(char *str)
{
	long long	i;
	long long	sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
