# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mndhlovu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 16:48:32 by mndhlovu          #+#    #+#              #
#    Updated: 2018/11/12 20:13:47 by mndhlovu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = ./includes/
SRC_C = ./src_libc/ft_memset.c ./src_libc/ft_bzero.c ./src_libc/ft_memcpy.c \
        ./src_libc/ft_memccpy.c ./src_libc/ft_memmove.c ./src_libc/ft_memchr.c \
		./src_libc/ft_memcmp.c ./src_libc/ft_strlen.c ./src_libc/ft_strdup.c \
		./src_libc/ft_strcpy.c ./src_libc/ft_strncpy.c ./src_libc/ft_strcat.c \
		./src_libc/ft_strncat.c ./src_libc/ft_strlcat.c ./src_libc/ft_strchr.c \
		./src_libc/ft_strrchr.c ./src_libc/ft_strstr.c ./src_libc/ft_strnstr.c \
		./src_libc/ft_strcmp.c ./src_libc/ft_strncmp.c ./src_libc/ft_atoi.c \
		./src_libc/ft_isalpha.c ./src_libc/ft_isdigit.c ./src_libc/ft_isalnum.c \
		./src_libc/ft_isascii.c ./src_Libc/ft_isprint.c ./src_libc/ft_tolower.c \
		./src_libc/ft_toupper.c

SRC_A = ./src_adt/ft_memalloc.c ./src_adt/ft_memdel.c ./src_adt/ft_strnew.c \
		./src_adt/ft_strdel.c ./src_adt/ft_strclr.c ./src_adt/ft_striter.c \
		./src_adt/ft_striteri.c ./src_adt/ft_strmap.c ./src_adt/ft_strmapi.c \
		./src_adt/ft_strequ.c ./src_adt/ft_strenqu.c ./src_adt/ft_strsub.c \
		./src_adt/ft_strjoin.c ./src_adt/ft_strtrim.c ./src_adt/ft_strsplit.c \
		./src_adt/ft_itoa.c ./src_adt/ft_putchar.c ./src_adt/ft_putchar_fd.c \
		./src_adt/ft_putstr.c ./src_adt/ft_putstr_fd.c ./src_adt/ft_putnbr.c \
		./src_adt/ft_putnbr_fd.c ./src_adt/ft_putendl.c ./src_adt/ft_putendl_fd.c 
SRC_B = ./src_bon/ft_lstnew.c ./src_bon/ft_lstdelone.c ./src_bon/ft_lstdel.c \
		./src_bon/ft_lstadd.c ./src_bon/ft_lstiter.c ./src_bon/ft_lstmap.c

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -I $(HEADER) -c $(SRC_C) $(SRC_A) $(SRC_B)
		ar rc $(NAME) *.o
		ranlib $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
