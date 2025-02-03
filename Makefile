NAME = push_swap.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJ = push_swap.o\


all : ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all
