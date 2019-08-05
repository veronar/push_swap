/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/05 14:39:16 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../checker_inc/checker.h"

size_t		ft_lst_size(t_dlist **head);
int			ft_forsize(t_dlist **head_a, t_dlist **head_b);
t_dlist		*ft_smallest(t_dlist **head_a);
int			ft_small_to_top(t_dlist **head_a, t_dlist **head_b);
int			ft_small_top_5(t_dlist **head_a, t_dlist **head_b);
int			ft_is_ascending(t_dlist **head);
void		ft_sortsize(t_dlist **head_a, t_dlist **head_b);
size_t		ft_small_pos(t_dlist **head_a, t_dlist *smallest);

void		ft_2list(t_dlist **head_a, t_dlist **head_b);
int			ft_3list(t_dlist **head_a, t_dlist **head_b);
int			ft_5list(t_dlist **head_a, t_dlist **head_b);

void		ft_push_swapa(t_dlist **head_a);
void		ft_push_swapb(t_dlist **head_b);
void		ft_push_swapab(t_dlist **head_a, t_dlist **head_b);
void		ft_push_pa(t_dlist **head_a, t_dlist **head_b);
void		ft_push_pb(t_dlist **head_a, t_dlist **head_b);
void		ft_push_rota(t_dlist **head_a);
void		ft_push_rotb(t_dlist **head_b);
void		ft_push_rotab(t_dlist **head_a, t_dlist **head_b);
void		ft_push_revrota(t_dlist **head_a);
void		ft_push_revrotb(t_dlist **head_b);
void		ft_push_revrotab(t_dlist **head_a, t_dlist **head_b);

#endif
