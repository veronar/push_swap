/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/10 11:07:16 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"

typedef struct		s_env
{
	int				moves;
	int				vis;
}					t_env;

typedef struct		s_dlist
{
	struct s_dlist	*prev;
	int				n;
	int				norm;
	struct s_dlist	*next;
}					t_dlist;

int					ft_error(t_dlist **head);
int					ft_usage(void);
int					ft_checkint(char **av);
t_dlist				*ft_newnode(char *av);
int					ft_fill_list(t_dlist **head, int ac, char **av, int a);
int					ft_init_list(int ac, char **av, t_dlist **head);
void				ft_lst_swap(t_dlist **head);
void				ft_ss_swap_ab(t_dlist **head_a, t_dlist **head_b);
void				ft_push_to_a(t_dlist **head_a, t_dlist **head_b);
void				ft_push_to_b(t_dlist **head_a, t_dlist **head_b);
void				ft_lst_rot(t_dlist **head);
void				ft_lst_rot_ab(t_dlist **head_a, t_dlist **head_b);
void				ft_lst_rev_rot(t_dlist **head);
void				ft_lst_rev_rot_ab(t_dlist **head_a, t_dlist **head_b);
t_dlist				*ft_init_list_b(int a, int norm);
t_dlist				*ft_newnode_b(int a, int norm);
int					ft_check_sort(t_dlist **head_a, t_dlist **head_b);
int					ft_do_op(char *line, t_dlist **head_a, t_dlist **head_b);
void				ft_read_op(t_dlist **head_a, t_dlist **head_b);
void				ft_lst_del(t_dlist **head);
int					ft_check_dup(t_dlist **head);
void				ft_push_new_b(t_dlist **head_a, t_dlist **head_b);
void				ft_push_new_a(t_dlist **head_a, t_dlist **head_b);
int					ft_check_int_inner(char **av, int *i, int *j);
int					ft_fill_list_inner(char **av, int *a, int *i, \
					t_dlist **new_node);
void				ft_assign_newnode(t_dlist **head, t_dlist **current, \
					t_dlist **new_node);
long long			ft_atoll(char *str);

void				ft_addnorms_checker(t_dlist **head_a);
int					ft_lst_size(t_dlist **head);

void				ft_print_stack(t_dlist **head);
void				ft_rev_print_stack(t_dlist **head);
void				ft_print_stackboth(t_dlist **head_a, t_dlist **head_b);

void				ft_args(int *ac, char ***av, t_env **flags);
void				ft_flag_args(int *ac, char ***av, t_env *flags);

#endif
