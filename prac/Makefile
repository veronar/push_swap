# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 13:33:16 by vesingh           #+#    #+#              #
#    Updated: 2019/07/15 16:27:33 by vesingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

SRC = ft_init_list.c checker.c

INCL = push_swap.h

all: $(NAME)

$(NAME):
	make -C ./libft
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) ./libft/libft.a
	#gcc -o $(NAME) main.c -lmlx -framework OpenGL -framework Appkit

clean:
	make clean -C ./libft

fclean: clean
	make fclean -C ./libft
	rm -f $(NAME)

re: fclean all
