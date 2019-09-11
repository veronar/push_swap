/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:23:47 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/11 15:05:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void			ft_init_flag(t_env **flags)
{
	//(*flags)->mov = 0;
	//*flags = (t_env*)malloc(sizeof(t_env));
	(*flags)->moves = 0;
	(*flags)->col = 0;
	(*flags)->vis = 0;
	//(*flags)->step = 0;
	//(*flags)->opp = 0;
	//(*flags)->done = 0;
	return ;
}

/*
** ft_is_arg: Checks whether the current av input should be handled as an argument.
*/

static int		ft_is_arg(char *av)
{
	if (*av == '-' && (!(av[1] >= '0' && av[1] <= '9')) && !(av[1] == '-'))
		return (1);
	return (0);
}

/*
** Handles whether any arguments are passed in, and skips over them.
*/

void			ft_flag_args(int *ac, char ***av, t_env **flags)
{
	*av += 1;
	if (ft_is_arg(**av))
		ft_init_flag(flags);
	while (*ac > 0 && ft_is_arg(**av))
	{
		if (*ac == 0)
			ft_usage();
		**av += 1;
		if (***av == 'v')
		{
			*av += 1;
			*ac -= 1;
			(*flags)->vis = 1;
		}
		else if (***av == 'c')
		{
			*av += 1;
			*ac -= 1;
			(*flags)->col = 1;
		}
/*		else if (***av == 'p')
		{
			*av += 1;
			*ac -= 1;
			(*flags)->p = 1;
		}
		else if (***av == 'c')
		{
			*av += 1;
			*ac -= 1;
			args->c = 1;
		}*/
		else
			ft_usage();
	}

	return ;
}
