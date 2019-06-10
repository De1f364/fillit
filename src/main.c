#include "../includes/fillit.h"

int main(int argc, char **argv)
{
	char *str;

	if (argc != 2)
	{
		ft_putstr("usage: you need to put 1 file as parametr");
		return (0);
	}
	if ((str = read_file(open(argv[1], O_RDONLY))) == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	if (!check_valid(str))
	{
		ft_putstr("error\n");
		return (0);
	}
	//get_tetro();
	//solve_tetro();
	//print_map();
	//free_all();


	return (1);
}
