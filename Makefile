NAME = push_swap.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJ =	push_swap.o\
	libft_bonus/ft_lstadd_back.o\
	libft_bonus/ft_lstadd_front.o\
	libft_bonus/ft_lstclear.o\
	libft_bonus/ft_lstdelone.o\
	libft_bonus/ft_lstlast.o\
	libft_bonus/ft_lstsize.o\
	libft_bonus/lstnew.o\
	printf/ft_fonction.o\
	printf/ft_fonctions.o\
	printf/ft_printf.o\
	utils/push_swap_utils_push.o\
	utils/push_swap_utils_reverse_rotate.o\
	utils/push_swap_utils_rotate.o\
	utils/push_swap_utils_swap.o

all : ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all
