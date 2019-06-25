#include "../includes/fillit.h"

int		tetro_list_count(t_list *list)
{
	int		i;

	i = 0;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (1);
}

void	*tetro_list_rev(t_list **tetro_list)
{
	t_list	*prev;
	t_list	*cur;
	t_list	*fut;
	t_list	*temp;

	prev = NULL;
	temp = NULL;
	cur = *tetro_list;
	while (cur != NULL)
	{
		fut = cur->next;
		cur->next = prev;
		prev = cur;
		cur = fut;
		temp = prev->next;
	}
	*tetro_list = temp;
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
	tetro_list = read_file_for_solve(str);
	map = solve(tetro_list);
	print_map(map);
	free_map(map);
	free_all_tetri(tetro_list);
	return (1);
}
