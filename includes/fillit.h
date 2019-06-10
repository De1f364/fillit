#include "../libft/libft.h"

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int 	main(int argc, char **argv);
char	*read_file(int fd);
int 	check_valid(char *str);

#endif