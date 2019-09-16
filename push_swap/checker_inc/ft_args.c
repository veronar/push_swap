/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:23:47 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/16 11:28:14 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** ft_flags_first: checks if colour or visual flag is on, if it is then print
** the stacks. This is called after each move is done.
** Then checks if moves flag is on, if it is then adds to the move counter.
*/

void			ft_flags_first(t_dlist **head_a, t_dlist **head_b,\
				t_env **flags)
{
	if ((*flags)->col == 1)
		ft_print_stackcol(head_a, head_b);
	else if ((*flags)->vis == 1)
		ft_print_stackboth(head_a, head_b);
}

/*
** ft_init_flag: assigns the initial values (0) to all flags
** Moves flag is set to -1 which is off. If it turns on then it is 0. Therefore\
** after each move move++ can be used to add to the counter.
*/

void			ft_init_flag(t_env **flags)
{
	(*flags)->col = 0;
	(*flags)->vis = 0;
	(*flags)->moves = -1;
	(*flags)->opp = 0;
	(*flags)->slow = 0;
	return ;
}

/*
** ft_is_arg: Checks whether the current av input should be handled as\
** an argument.
*/

static int		ft_is_arg(char *av)
{
	if (*av == '-' && (!(av[1] >= '0' && av[1] <= '9')) && !(av[1] == '-'))
		return (1);
	return (0);
}

/*
** ft_flag_args: Handles whether any arguments are passed in, and skips\
** over them.
*/

void			ft_shiftargs(int *ac, char ***av, char c, t_env **flags)
{
	*av += 1;
	*ac -= 1;
	if (c == 'v')
		(*flags)->vis = 1;
	else if (c == 'c')
		(*flags)->col = 1;
	else if (c == 'm')
		(*flags)->moves = 0;
	else if (c == 'o')
		(*flags)->opp = 1;
	else if (c == 's')
		(*flags)->slow = 1;
}

/*
** ft_flag_args: assesses the flags that were given, if v - visual mode on.
** If c - colour mode on. If m - moves mode on. If o - opps mode on.
** if s - slow mode on. If any other flag then call ft_usage() for Invalid.
*/

void			ft_flag_args(int *ac, char ***av, t_env **flags)
{
	*av += 1;
	ft_init_flag(flags);
	while (*ac > 0 && ft_is_arg(**av))
	{
		if (*ac == 0)
			ft_usage();
		if (*ac > 2)
			**av += 1;
		if (***av == 'v')
			ft_shiftargs(ac, av, ***av, flags);
		else if (***av == 'c')
			ft_shiftargs(ac, av, ***av, flags);
		else if (***av == 'm')
			ft_shiftargs(ac, av, ***av, flags);
		else if (***av == 'o')
			ft_shiftargs(ac, av, ***av, flags);
		else if (***av == 's')
			ft_shiftargs(ac, av, ***av, flags);
		else
			ft_usage();
	}
	return ;
}
