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
	static	t_list	*tetro_list;
	t_list	*list_new;

	i = -1;
	if (!tetro_list)
		tetro_list= ft_lstnew(NULL, 0);
	tetro = NULL;
	while (*str != '#')
		str++;
	tetro = tetro_for_solve(str, tetro);
	while (tetro[++i])
		if (tetro[i] == '#')
			tetro[i] = letter;
	list_new = ft_lstnew(tetro, 20);
	ft_lstadd(&tetro_list, list_new);
	return (tetro_list);
}