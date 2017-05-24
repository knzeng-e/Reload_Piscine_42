NAME = ft_display_file

CC = gcc -Wall -Werror -Wextra

SRCS = ft_display_file.c \
	   ft_read_file.c

HEAD = ft_display_file.h

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $^ -o $@

%.o: %.c
		$(CC) -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
