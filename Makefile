NAME = fillit

CFLAGS += -Wall -Wextra -Werror
CFLAGS += -I libft/
SRC = src/*.c
OBJ = $(SRC:.c=.o)
LIBFT = libft/libft.a





all: $(NAME)



$(OBJ):
gcc -c $(CFLAGS) $(SRC)



$(LIBFT):
make -C libft



$(NAME): $(LIBFT) $(OBJ)
gcc $(OBJ) $(LIBFT) -o $(NAME)



clean:
rm -rf $(OBJ)
make -C libft clean



fclean: clean
rm -rf $(NAME)
make -C libft fclean



re: fclean all