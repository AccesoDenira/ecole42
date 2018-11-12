# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 19:05:36 by mndhlovu          #+#    #+#              #
#    Updated: 2018/11/07 11:42:27 by mndhlovu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEADER = ./includes/
FLAGS = -Wall -Werror -Wextra
all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(SRC) -I $(HEADER)
		ar rc $(NAME) *.o
clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
		rm -f includes/*.*.gch

re: fclean all
