#include "../includes/fillit.h"

int main(int argc, char **argv)
{
	char	*str;
	char	letter;
	t_list	*tetro_list;

	letter = 'A';
	tetro_list = NULL;
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
	tetro_list = get_tetro(str, letter);
//	map = solve_tetro(list);
//	print_map(map);
//	free_all();


	return (0);
}
