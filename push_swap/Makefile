# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 13:33:16 by vesingh           #+#    #+#              #
#    Updated: 2019/08/02 08:46:48 by vesingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	checker

SRC =	./checker_inc/checker.c\
		./checker_inc/ft_lst_swap.c\
		./checker_inc/ft_lst_rotate.c\
		./checker_inc/ft_lst_push.c\
 		./checker_inc/ft_lst_rev_rotate.c\
		./checker_inc/ft_init_list_a.c\
		./checker_inc/ft_init_list_b.c\
		./checker_inc/ft_operands.c\
		./checker_inc/ft_check_ints.c\
		./checker_inc/ft_error.c\
		./checker_inc/ft_test.c\

INCL =	./checker_inc/checker.h

all: $(NAME)

$(NAME):
	make -C ./libft
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) ./libft/libft.a

clean:
	make clean -C ./libft

fclean:
	make fclean -C ./libft
	rm -f $(NAME)

re: fclean all