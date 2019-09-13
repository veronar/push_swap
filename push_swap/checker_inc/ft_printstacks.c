/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:25:28 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/13 16:42:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** ft_whitespaces: Prints white spaces after number in stack A in printed
** this is to make stack b align properly.
*/

void		ft_whitespaces(int n)
{
	int	i;

	i = 15 - ft_itoa_len(n);
	while (i--)
		ft_putchar_fd(' ', 1);
}

/*
** ft_putstacks: gets called to print number in a, then white space, then\
** number in b.
*/

void		ft_putstacks(t_dlist **stacka, t_dlist **stackb)
{
	if ((*stacka) != NULL)
	{
		ft_putnbr_fd((*stacka)->n, 1);
		ft_whitespaces((*stacka)->n);
		(*stacka) = (*stacka)->next;
	}
	else if ((*stacka) == NULL)
		ft_putstr_fd("               ", 1);
	if ((*stackb) != NULL)
	{
		ft_putnbr_fd((*stackb)->n, 1);
		(*stackb) = (*stackb)->next;
	}
	ft_putchar_fd('\n', 1);
}

/*
** ft_print_stackboth: prints both stacks - called when visual mode is on.
*/

void		ft_print_stackboth(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*stacka;
	t_dlist *stackb;

	stacka = *head_a;
	stackb = *head_b;
	ft_putstr(CLEAR);
	ft_putstr(" - Stack A - ");
	ft_putendl(" - Stack B - ");
	while (stacka != NULL || stackb != NULL)
		ft_putstacks(&stacka, &stackb);
	ft_putchar('\n');
}

/*
** ft_putstacks_col: gets called to print number in a, then white space, then\
** number in b. This prints it in colour when colour mode is on.
*/

void		ft_putstacks_col(t_dlist **stacka, t_dlist **stackb)
{
	if ((*stacka) != NULL)
	{
		ft_putnbr_col_fd(CYAN, (*stacka)->n, 1);
		ft_whitespaces((*stacka)->n);
		(*stacka) = (*stacka)->next;
	}
	else if ((*stacka) == NULL)
		ft_putstr_fd("               ", 1);
	if ((*stackb) != NULL)
	{
		ft_putnbr_col_fd(RED, (*stackb)->n, 1);
		(*stackb) = (*stackb)->next;
	}
	ft_putchar_fd('\n', 1);
}

/*
** ft_print_stackboth: prints both stacks - called when colour mode is on.
*/

void		ft_print_stackcol(t_dlist **head_a, t_dlist **head_b)
{
	t_dlist	*stacka;
	t_dlist *stackb;

	stacka = *head_a;
	stackb = *head_b;
	ft_putstr(CLEAR);
	ft_putstr_col_fd(CYAN, " - Stack A - ", 1);
	ft_putstr_col_fd(RED, " - Stack B -\n", 1);
	while (stacka != NULL || stackb != NULL)
		ft_putstacks_col(&stacka, &stackb);
	ft_putchar('\n');
}
