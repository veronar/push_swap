# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 13:33:16 by vesingh           #+#    #+#              #
#    Updated: 2019/07/23 14:58:42 by vesingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

SRC =	checker.c ft_lst_swap.c ft_lst_rotate.c ft_lst_push.c\
 		ft_lst_rev_rotate.c ft_init_list_a.c ft_init_list_b.c\
		ft_operands.c ft_check_ints.c ft_error.c ft_test.c

INCL = push_swap.h

all: $(NAME)

$(NAME):
	make -C ./libft
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) ./libft/libft.a

clean:
	make clean -C ./libft

fclean: clean
	make fclean -C ./libft
	rm -f $(NAME)

re: fclean all