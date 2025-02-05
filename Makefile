NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC =	push_swap.c\
	libft/ft_lstadd_back.c\
        libft/ft_lstadd_front.c\
        libft/ft_lstclear.c\
        libft/ft_lstdelone.c\
        libft/ft_lstlast.c\
        libft/ft_lstsize.c\
	libft/ft_atoi.c\
	libft/ft_isdigit.c\
        libft/lstnew.c\
	printf/ft_fonction.c\
        printf/ft_fonctions.c\
        printf/ft_printf.c\
	utils/push_swap_utils_push.c\
        utils/push_swap_utils_reverse_rotate.c\
        utils/push_swap_utils_rotate.c\
        utils/push_swap_utils_swap.c\
	utils/ft_can_be_int.c

OBJ =	${SRC:.c = .o}

${NAME}: ${OBJ}
	 ${CC} ${CFLAGS} ${OBJ} -o ${NAME}

all : ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all
