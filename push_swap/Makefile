# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 13:33:16 by vesingh           #+#    #+#              #
#    Updated: 2019/08/05 16:30:30 by vesingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH = push_swap
CHECK = checker

C_DIR = ./checker_inc/
P_DIR = ./push_swap_inc/

LIBRARY_NAME = libft.a
LIBRARY_DIR = ./libft/
LIBRARY = $(addprefix $(LIBRARY_DIR), $(LIBRARY_NAME))

FLAGS = -Wall -Werror -Wextra

CHECK_FUNC =	checker.c\
				ft_lst_swap.c\
				ft_lst_rotate.c\
				ft_lst_push.c\
 				ft_lst_rev_rotate.c\
				ft_init_list_a.c\
				ft_init_list_b.c\
				ft_operands.c\
				ft_check_ints.c\
				ft_error.c\
				ft_test.c\

PUSH_FUNC = 	push_swap.c\
				ft_sortlists.c\
				ft_simplesort.c\
				ft_push_ops1.c\
				ft_push_ops2.c\
				ft_push_ops3.c\
				ft_big_sort.c\
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

CHECK_FILES = $(addprefix $(C_DIR), $(CHECK_FUNC))
PUSH_FILES = $(addprefix $(P_DIR), $(PUSH_FUNC))

CHECK_OBJECTS = $(CHECK_FILES:.c=.o)
PUSH_OBJECTS = $(PUSH_FILES:.c=.o)

INCL =	./checker_inc/checker.h

all: $(CHECK) $(PUSH)

$(CHECK): $(LIBRARY_NAME) $(CHECK_OBJECTS)
	@gcc $(FLAGS) -o $(CHECK) $(CHECK_OBJECTS) $(LIBRARY)
	@echo "\033[37mChecker Built!\033[0m"

$(PUSH): $(LIBRARY_NAME) $(PUSH_OBJECTS)
	@gcc $(FLAGS) -o $(PUSH) $(PUSH_OBJECTS) $(LIBRARY)
	@echo "\033[37mPush_Swap Built!\033[0m"

$(LIBRARY_NAME):
	make -C $(LIBRARY_DIR)

%.o: %.c
	@echo "\033[36mCreating Objects $@\033[0m"
	@gcc $(FLAGS) -c $< -o $@

clean:
	@echo "\033[33mRemoving Objects...\033[0m"
	@/bin/rm -f $(CHECK_OBJECTS)
	@/bin/rm -f $(PUSH_OBJECTS)
	@make clean -C $(LIBRARY_DIR)
	@echo "\033[33mClean complete!\033[0m"

fclean:
	@echo "\033[33mRemoving Objects...\033[0m"
	@/bin/rm -f $(CHECK_OBJECTS) $(PUSH_OBJECTS)
	@/bin/rm -f $(CHECK) $(PUSH)
	@make fclean -C $(LIBRARY_DIR)
	@echo "\033[33mFclean complete!\033[0m"

re: fclean all