#include "../includes/fillit.h"
#include <stdio.h>

int		tetro_list_count(t_list *list)
{
	int		i;

	i = 0;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i - 1);
}


int main(int argc, char **argv)
{
	char	*str;
	char	letter;
	char 	*map;
	t_list	*tetro_list;

//	letter = 'A';
//	tetro_list = NULL;
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
	if ((tetro_list = read_file_for_solve(open(argv[1], O_RDONLY))) == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	map = create_map(tetro_list_count(tetro_list));
	printf("%s", map);

//	print_map(map);
//	free_all();


	return (0);
}
