# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 13:33:16 by vesingh           #+#    #+#              #
#    Updated: 2019/07/17 11:36:56 by vesingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

SRC = ft_init_list.c checker.c ft_lst_swap.c ft_lst_rotate.c ft_lst_push.c ft_lst_rev_rotate.c ft_test.c

INCL = push_swap.h

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) ./libft/libft.a

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all