#include "../includes/fillit.h"

char	*tetro_for_solve(const char *str, char *tetro)
{
	int 	i;

	i = 0;
	if (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 6] == '#')
		tetro = ft_strdup("##\n##\n");
	if (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 11] == '#')
		tetro = ft_strdup("#.\n#.\n##");
	if (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 15] == '#')
		tetro = ft_strdup("#\n#\n#\n#\n");
	if (str[i + 5] == '#' && str[i + 9] == '#' && str[i + 10] == '#')
		tetro = ft_strdup(".#\n.#\n##\n");
	if (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 10] == '#')
		tetro = ft_strdup("##\n#.\n#.\n");
	if (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
		tetro = ft_strdup("##\n.#\n.#\n");
	if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
		tetro = ft_strdup("#.\n##\n.#");
	if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 9] == '#')
		tetro = ft_strdup(".#\n##\n#.");
	if (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
		tetro = ft_strdup("##.\n.##\n");
	if (str[i + 1] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
		tetro = ft_strdup(".##\n##.\n");
	if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 6] == '#')
		tetro = ft_strdup(".#.\n###\n");
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 6] == '#')
		tetro = ft_strdup("###\n.#.\n");
	if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 10] == '#')
		tetro = ft_strdup("#.\n##\n#.\n");
	if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 10] == '#')
		tetro = ft_strdup(".#\n##\n.#\n");
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 3] == '#')
		tetro = ft_strdup("####\n");
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 7] == '#')
		tetro = ft_strdup("###\n..#\n");
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 5] == '#')
		tetro = ft_strdup("##\n##\n");
	if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
		tetro = ft_strdup("#..\n###\n");
	if (str[i + 3] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
		tetro = ft_strdup("..#\n###\n");
	return (tetro);
}

t_list	*get_tetro(char	*str, char letter)
{
	char	*tetro;
	int 	i;
	t_list	*tetro_list;
	t_list 	*tet_list;

	tetro_list = NULL;
	tet_list = NULL;
	i = -1;
	tetro = NULL;
	while (*str != '#')
		str++;
	tetro = tetro_for_solve(str, tetro);
	while (tetro[++i])
		if (tetro[i] == '#')
			tetro[i] = letter;
	ft_lstadd(&tetro_list, ft_lstnew(tetro, 20));
	return (tetro_list);
}