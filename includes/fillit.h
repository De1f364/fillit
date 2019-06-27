/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <neddison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 21:33:49 by neddison          #+#    #+#             */
/*   Updated: 2019/06/25 22:00:16 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef	struct	s_map
{
	int			size;
	char		**content;
}				t_map;

typedef struct	s_tetris
{
	char		**pos;
	int			height;
	int			width;
	char		letter;
}				t_tetris;

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

int				main(int argc, char **argv);
char			*read_file(int fd);
int				check_valid(char *str);
int				check_block(const char *str);
int				check_tetro(const char *str);
t_list			*get_tetro(char	*str, char letter);
char			*tetro_for_solve(const char *str, char *tetro);
t_list			*read_file_for_solve(char *str);
void			*tetro_list_rev(t_list **tetro_list);
int				tetro_list_count(t_list *list);
t_map			*solve(t_list *lst);
void			setchar_tetri(t_map *map, t_tetris *tetri,
				t_point *point, char c);
int				place_tetri(t_map *map, t_tetris *tetri, int x, int y);
t_map			*create_map(int size);
t_point			*get_point(int x, int y);
void			print_map(t_map *map);
void			free_map(t_map *map);
t_list			*tetro_free(t_list *lst_tetris);

#endif
