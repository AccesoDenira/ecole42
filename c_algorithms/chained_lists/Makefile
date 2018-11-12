# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/12 16:46:01 by mndhlovu          #+#    #+#              #
#    Updated: 2018/11/12 17:13:53 by mndhlovu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libchain.a
SRC = ./srcs/ft_putchar_fd.c ./srcs/ft_putstr_fd.c ./srcs/ft_deleteFirst.c \
	  ./srcs/ft_deleteKey.c ./srcs/ft_find.c ./srcs/ft_insertFirst.c \
	  ./srcs/ft_lenght.c ./srcs/ft_printList.c ./srcs/ft_isEmpty.c \
	  ./srcs/ft_putnbr_fd.c ./srcs/ft_reverse.c ./srcs/ft_sortList.c \
	  ./srcs/ft_strlen.c
FLAGS = -Wall -Werror -Wextra
HEADER = ./includes/
all:$(NAME)

$(NAME):
		gcc $(FLAGS) -I $(HEADER) -c $(SRC)
		ar rc $(NAME) *.o
		ranlib $(NAME)

clean:
		rm -f *.o

fclean:clean
		rm -f *.a
