/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:21:07 by vesingh           #+#    #+#             */
/*   Updated: 2019/07/17 11:17:36 by vesingh          ###   ########.fr       */
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

int			ft_error(void);
int			ft_checkint(char **av);
j_list		*ft_newnode(char *av);
int			ft_fill_list(j_list **head, int ac, char **av, int a);
j_list		*ft_init_list(int ac, char **av);
void		ft_lst_swap(j_list **head);
void		ft_ss_swap_ab(j_list **head_a, j_list **head_b);
void		ft_push_to_a(j_list **head_a, j_list **head_b);
void		ft_push_to_b(j_list **head_a, j_list **head_b);
void		ft_lst_rotate(j_list **head);
void		ft_lst_rotate_both(j_list **head_a, j_list **head_b);

void		ft_print_stack(j_list **head);
void		ft_rev_print_stack(j_list **head);

#endif
