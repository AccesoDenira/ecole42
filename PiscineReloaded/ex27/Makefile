# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 20:12:09 by mndhlovu          #+#    #+#              #
#    Updated: 2018/11/06 20:17:26 by mndhlovu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ./srcs/ft_display_file.c
HEADER = ./includes/
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -o $(NAME) -I $(HEADER) $(SRC)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
