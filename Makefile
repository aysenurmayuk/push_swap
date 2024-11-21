NAME = push_swap

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

LIBFT = libft/libft.a

SRC = push_swap.c push.c rerotate.c rotate.c swap.c sort.c \
		radix.c utils_error.c utils_index.c utils_list.c utils_sort.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		make -C ./libft -s
		$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
		make clean -C ./libft
		$(RM) $(OBJ)

fclean: clean
		make fclean -C ./libft
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re