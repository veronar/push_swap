/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:20:57 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/11 17:31:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../libft/libft.h"

void	ft_putnbr_col_fd(char *colour, int nbr, int fd)
{
	ft_putstr_fd(colour, fd);
	ft_putnbr_fd(nbr, fd);
	ft_putstr_fd(RESET, fd);
}

void	ft_putstr_col_fd(char *colour, char *str, int fd)
{
	ft_putstr_fd(colour, fd);
	ft_putstr_fd(str, fd);
	ft_putstr_fd(RESET, fd);
}

void		ft_whitespaces(int n)
{
	int	i;

	i = 13 - ft_itoa_len(n);
	while (i--)
		ft_putchar(' ');
}

void		ft_print_stackboth(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*stacka;
	t_dlist *stackb;

	stacka = *head_a;
	stackb = *head_b;
	ft_putstr_col_fd(BLUE, " - Stack A - ", 1);
	ft_putstr_col_fd(RED, " - Stack B - \n", 1);
	while (stacka != NULL || stackb != NULL)
	{
		if (stacka != NULL)
		{
			ft_putnbr(stacka->n);
			ft_whitespaces(stacka->n);
			stacka = stacka->next;
		}
		else if (stacka == NULL)
			ft_putstr("             ");
		if (stackb != NULL)
		{
			ft_putnbr(stackb->n);
			stackb = stackb->next;
		}
		ft_putchar('\n');
	}
	ft_putchar('\n');
}

void		ft_print_stackcol(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*stacka;
	t_dlist *stackb;

	stacka = *head_a;
	stackb = *head_b;
	ft_putstr("\033[H\033[J");
	//"\033[37mPush_Swap Built!\033[0m"
	ft_putstr("\033[37m - Stack A - \033[0m");
	ft_putendl("\033[34m - Stack B - \033[00m");
	while (stacka != NULL || stackb != NULL)
	{
		if (stacka != NULL)
		{
			ft_putstr("\033[37m");
			ft_putnbr(stacka->n);
			ft_whitespaces(stacka->n);
			stacka = stacka->next;
			ft_putstr("\033[0m");
		}
		else if (stacka == NULL)
			ft_putstr("             ");
		if (stackb != NULL)
		{
			ft_putstr("\033[34m");
			ft_putnbr(stackb->n);
			stackb = stackb->next;
			ft_putstr("\033[00m");
		}
		ft_putchar('\n');
	}
	ft_putchar('\n');
}

void		ft_print_stack(t_dlist **head)
{
	t_dlist	*start;

	start = *head;
	while (start != NULL)
	{
		ft_putstr("n = ");
		ft_putnbr(start->n);
		ft_putchar('\n');
		start = start->next;
	}
	ft_putchar('\n');
}

void		ft_rev_print_stack(t_dlist **head)
{
	t_dlist	*end;
	t_dlist	*start;

	start = *head;
	while (start->next != NULL)
		start = start->next;
	end = start;
	while (end != NULL)
	{
		ft_putstr("n = ");
		ft_putnbr(end->n);
		ft_putchar('\n');
		end = end->prev;
	}
	ft_putchar('\n');
}

void		ft_print_stacknorm(t_dlist **head)
{
	t_dlist	*start;

	start = *head;
	while (start != NULL)
	{
		ft_putstr("n = ");
		ft_putnbr(start->n);
		ft_putchar('\n');
		ft_putstr("norm = ");
		ft_putnbr(start->norm);
		ft_putchar('\n');
		ft_putchar('\n');
		start = start->next;
	}
	ft_putchar('\n');
}
