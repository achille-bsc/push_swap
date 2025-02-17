NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

SRC =	push_swap.c\
		libft/ft_putstr.c\
		libft/ft_lstadd_back.c\
        libft/ft_lstadd_front.c\
        libft/ft_lstlast.c\
        libft/ft_lstsize.c\
        printf/ft_printf.c\
		libft/ft_atoi.c\
		libft/ft_isdigit.c\
        libft/lstnew.c\
		libft/ft_split.c\
		libft/ft_lstclear.c\
		printf/ft_fonction.c\
        printf/ft_fonctions.c\
		utils/push_swap_utils_push.c\
        utils/push_swap_utils_reverse_rotate.c\
        utils/push_swap_utils_rotate.c\
        utils/push_swap_utils_swap.c\
		utils/ft_can_be_int.c\
		utils/lst_get_min.c\
		utils/hard_force_sort.c\
		parsing.c\
		main.c


OBJ =	${SRC:.c=.o}

${NAME}: ${OBJ}
	 ${CC} ${CFLAGS} ${OBJ} -o ${NAME}

all : ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all

phony: all clean fclean re
