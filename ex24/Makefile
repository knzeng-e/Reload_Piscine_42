# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/23 18:59:31 by knzeng-e          #+#    #+#              #
#    Updated: 2017/05/23 19:14:14 by knzeng-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = srcs/

SRC = ft_putchar.c \
	  ft_putstr.c \
	  ft_strcmp.c \
	  ft_strlen.c \
	  ft_swap.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS += -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean: all
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: flcean
	make all
