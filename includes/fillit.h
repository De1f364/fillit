#include "../libft/libft.h"

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int 	main(int argc, char **argv);
char	*read_file(int fd);
int 	check_valid(char *str);
int 	check_block(const char *str);
int 	check_tetro(const char *str);
t_list	*get_tetro(char	*str, char letter);
char	*tetro_for_solve(const char *str, char *tetro);


#endif