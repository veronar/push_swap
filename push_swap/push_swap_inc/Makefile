# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 13:33:16 by vesingh           #+#    #+#              #
#    Updated: 2019/08/05 10:05:50 by vesingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	push_swap

SRC =	push_swap.c\
		ft_lst_size.c\
		ft_2list.c\
		ft_3list.c\
		ft_simplesort.c\
		ft_push_ops1.c\
		ft_push_ops2.c\
		ft_push_ops3.c\
		../checker_inc/ft_lst_swap.c\
		../checker_inc/ft_lst_rotate.c\
		../checker_inc/ft_lst_push.c\
 		../checker_inc/ft_lst_rev_rotate.c\
		../checker_inc/ft_init_list_a.c\
		../checker_inc/ft_init_list_b.c\
		../checker_inc/ft_operands.c\
		../checker_inc/ft_check_ints.c\
		../checker_inc/ft_error.c\
		../checker_inc/ft_test.c\

INCL =	push_swap.h ../checker_inc/checker.h

all: $(NAME)

$(NAME):
	make -C ../libft
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) ../libft/libft.a

clean:
	make clean -C ../libft

fclean:
	make fclean -C ../libft
	rm -f $(NAME)

re: fclean all