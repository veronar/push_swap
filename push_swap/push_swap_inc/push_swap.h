/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/02 15:23:31 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../checker_inc/checker.h"

size_t		ft_lst_size(t_dlist **head);
int			ft_forsize(t_dlist **head_a, t_dlist **head_b);
t_dlist		*ft_smallest(t_dlist **head_a);
void		ft_small_to_top(t_dlist **head_a, t_dlist **head_b);
int			ft_is_ascending(t_dlist **head);


void		ft_testing(t_dlist **head_a, t_dlist **head_b);

#endif
