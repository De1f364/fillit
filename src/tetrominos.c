/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrominos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <neddison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 21:50:44 by neddison          #+#    #+#             */
/*   Updated: 2019/06/25 21:54:05 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_tetris		*create_tetris(char **pos, int height, int width, char letter)
{
	t_tetris *tetris;

	if ((tetris = ft_memalloc(sizeof(t_tetris))) == NULL)
		return (NULL);
	tetris->pos = pos;
	tetris->height = height;
	tetris->width = width;
	tetris->letter = letter;
	return (tetris);
}

t_point			*get_point(int x, int y)
{
	t_point *point;

	if ((point = ft_memalloc(sizeof(t_point))) == NULL)
		return (NULL);
	point->x = x;
	point->y = y;
	return (point);
}

void			get_min_and_max(char *tetris, t_point *min, t_point *max)
{
	int	i;

	i = 0;
	while (i < 19)
	{
		if (tetris[i] == '#')
		{
			if (min->x > i % 5)
				min->x = i % 5;
			if (min->y > i / 5)
				min->y = i / 5;
			if (max->x < i % 5)
				max->x = i % 5;
			if (max->y < i / 5)
				max->y = i / 5;
		}
		i++;
	}
}

t_list			*free_all_tetri(t_list *lst_tetris)
{
	t_tetris		*tetris;
	t_list			*next;
	int				i;

	i = 0;
	while (lst_tetris)
	{
		tetris = (t_tetris*)lst_tetris->content;
		next = lst_tetris->next;
		while (i < tetris->height)
		{
			ft_memdel((void**)(&(tetris->pos[i])));
			i++;
		}
		ft_memdel((void**)&lst_tetris);
		lst_tetris = next;
	}
	return (NULL);
}

t_list			*get_tetro(char *str, char letter)
{
	t_point		*min;
	t_point		*max;
	char		**pos;
	int			i;
	t_tetris	*tetris_content;

	i = 0;
	min = get_point(3, 3);
	max = get_point(0, 0);
	get_min_and_max(str, min, max);
	pos = ft_memalloc(sizeof(char*) * (max->y - min->y) + 1);
	while (i < max->y - min->y + 1)
	{
		pos[i] = ft_strnew((max->x - min->x) + 1);
		ft_memcpy(pos[i], &str[min->x + (i + min->y) * 5],
				(max->x - min->x) + 1);
		i++;
	}
	tetris_content = create_tetris(pos, (max->y - min->y) + 1,
			(max->x - min->x + 1), letter);
	ft_memdel((void**)&min);
	ft_memdel((void**)&max);
	return (tetris_content);
}
