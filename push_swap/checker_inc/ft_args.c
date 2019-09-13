/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:23:47 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/13 16:02:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void			ft_init_flag(t_env **flags)
{
	//(*flags)->mov = 0;
	//*flags = (t_env*)malloc(sizeof(t_env));
	(*flags)->col = 0;
	(*flags)->vis = 0;
	(*flags)->moves = -1;
	//(*flags)->step = 0;
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

void			ft_flag_args(int *ac, char ***av, t_env **flags)
{
	*av += 1;
	ft_init_flag(flags);
	while (*ac > 0 && ft_is_arg(**av))
	{
		if (*ac == 0)
			ft_usage();
		if (*ac > 1)
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
