# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neddison <neddison@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/29 18:44:58 by neddison          #+#    #+#              #
#    Updated: 2019/05/29 18:49:57 by rdonnor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
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