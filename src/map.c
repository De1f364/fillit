#include "../includes/fillit.h"

void		print_map(t_map *map)
{
	int i;

	i = 0;
	while (i < map->size)
	{
		ft_putstr(map->content[i]);
		write(1, "\n", 1);
		++i;
	}
}

t_map		*create_map(int size)
{
	t_map	*map;
	int		i;
	int		j;

	i = 0;
	if (NULL == (map = (t_map*)ft_memalloc(sizeof(t_map))))
		return (NULL);
	map->size = size;
	if (NULL == (map->content = (char**)ft_memalloc(sizeof(char *) * size)))
		return (NULL);
	while (i < size)
	{
		if (NULL == (map->content[i] = ft_strnew(size)))
			return (NULL);
		j = 0;
		while (j < size)
		{
			map->content[i][j] = '.';
			j++;
		}
		i++;
	}
	return (map);
}

void		free_map(t_map *map)
{
	int i;

	i = 0;
	while (i < map->size)
	{
		free(map->content[i]);
		i++;
	}
	free(map->content);
	free(map);
}

int			place_tetri(t_map *map, t_tetris *tetri, int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < tetri->width)
	{
		j = 0;
		while (j < tetri->height)
		{
			if (tetri->pos[j][i] == '#' && map->content[y + j][x + i] != '.')
				return (0);
			++j;
		}
		++i;
	}
	setchar_tetri(map, tetri, get_point(x, y), tetri->letter);
	return (1);
}

void		setchar_tetri(t_map *map, t_tetris *tetri, t_point *point, char c)
{
	int	i;
	int	j;

	i = 0;
	while (i < tetri->width)
	{
		j = 0;
		while (j < tetri->height)
		{
			if (tetri->pos[j][i] == '#')
				map->content[point->y + j][point->x + i] = c;
			j++;
		}
		i++;
	}
	ft_memdel((void**)&point);
}