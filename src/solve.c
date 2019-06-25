/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <neddison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 21:54:23 by neddison          #+#    #+#             */
/*   Updated: 2019/06/25 21:55:41 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			back_track(t_map *map, t_list *lst)
{
	int			i;
	int			j;
	t_tetris	*tetri;

	if (lst == NULL)
		return (1);
	j = 0;
	tetri = (t_tetris*)(lst->content);
	while (j < map->size - tetri->height + 1)
	{
		i = 0;
		while (i < map->size - tetri->width + 1)
		{
			if (place_tetri(map, tetri, i, j))
			{
				if (back_track(map, lst->next))
					return (1);
				else
					setchar_tetri(map, tetri, get_point(i, j), '.');
			}
			i++;
		}
		j++;
	}
	return (0);
}

t_map		*solve(t_list *lst)
{
	t_map	*map;
	int		size;

	size = 2;
	while (size * size < tetro_list_count(lst) * 4)
		size++;
	map = create_map(size);
	while (!back_track(map, lst))
	{
		size++;
		free_map(map);
		map = create_map(size);
	}
	return (map);
}
