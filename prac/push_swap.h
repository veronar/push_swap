/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/23 14:49:53 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"

typedef struct		i_list
{
	struct i_list	*prev;
	int				n;
	struct i_list	*next;
}					j_list;

int					ft_error(j_list **head);
int					ft_checkint(char **av);
j_list				*ft_newnode(char *av);
int					ft_fill_list(j_list **head, int ac, char **av, int a);
int					ft_init_list(int ac, char **av, j_list **head);
void				ft_lst_swap(j_list **head);
void				ft_ss_swap_ab(j_list **head_a, j_list **head_b);
void				ft_push_to_a(j_list **head_a, j_list **head_b);
void				ft_push_to_b(j_list **head_a, j_list **head_b);
void				ft_lst_rot(j_list **head);
void				ft_lst_rot_ab(j_list **head_a, j_list **head_b);
void				ft_lst_rev_rot(j_list **head);
void				ft_lst_rev_rot_ab(j_list **head_a, j_list **head_b);
j_list				*ft_init_list_b(int a);
j_list				*ft_newnode_b(int a);
int					ft_check_sort(j_list **head_a, j_list **head_b);
int					ft_do_op(char *line, j_list **head_a, j_list **head_b);
void				ft_read_op(j_list **head_a, j_list **head_b);
void				ft_lst_del(j_list **head);
int					ft_check_dup(j_list **head);
void				ft_push_new_b(j_list **head_a, j_list **head_b);
void				ft_push_new_a(j_list **head_a, j_list **head_b);

void				ft_print_stack(j_list **head);
void				ft_rev_print_stack(j_list **head);

#endif
