/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <neddison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 10:51:14 by neddison          #+#    #+#             */
/*   Updated: 2019/04/26 20:36:02 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			shift(t_list **lst_el, size_t len)
{
	char			*tmp;

	if (!(tmp = (char *)ft_memalloc(ELSZ * sizeof(char))))
		return (-1);
	ft_memcpy(tmp, ft_memchr(ELCNT, 10, len + 1) + 1, ELSZ);
	ft_memdel(&ELCNT);
	if (!(ELCNT = ft_memalloc(ELSZ * sizeof(char))))
		return (-1);
	ft_memcpy(ELCNT, tmp, ELSZ);
	ft_memdel((void **)&tmp);
	return (1);
}

static int			write_to_line(char **line, t_list **lst_el, int i)
{
	size_t			len;

	if (!(ft_memchr(ELCNT, 10, ELSZ)) && !i)
		len = ELSZ;
	else
		len = (size_t)ft_memchr(ELCNT, 10, ELSZ) - (size_t)ELCNT;
	if (!ELSZ && !i)
	{
		*line = NULL;
		ft_lstdel(lst_el, ft_listclear);
		return (0);
	}
	if (!(*line = (char *)ft_strnew(sizeof(char) * len)))
		return (-1);
	ft_memcpy(*line, ELCNT, len);
	ELSZ = ELSZ - len - 1;
	if (ELSZ + 1 == 0)
	{
		ft_lstdel(lst_el, ft_listclear);
		return (1);
	}
	if (ELSZ)
		return (shift(lst_el, len));
	ft_lstdel(lst_el, ft_listclear);
	return (1);
}

int					concat(const int fd, char **line, t_list **lst_el)
{
	int				i;
	char			buf[BUFF_SIZE];
	char			*tmp;

	while (!(ft_memchr(ELCNT, 10, ELSZ)))
	{
		if (!(i = read(fd, buf, BUFF_SIZE)))
			break ;
		if (!(tmp = (char *)ft_memalloc((ELSZ + i) * sizeof(char))))
			return (-1);
		ft_memcpy(tmp, ELCNT, ELSZ);
		ft_memcpy(tmp + ELSZ, buf, i);
		ELSZ += i;
		ft_memdel(&ELCNT);
		if (!(ELCNT = ft_memalloc(sizeof(char) * ELSZ)))
			return (-1);
		ft_memcpy(ELCNT, tmp, ELSZ);
		ft_memdel((void **)&tmp);
	}
	return (write_to_line(line, lst_el, i));
}

int					isnewfd(t_list **list, int fd, char **line)
{
	t_list			*tmp;

	tmp = *list;
	while (tmp)
	{
		if (tmp->content_size == (size_t)fd)
		{
			if (!tmp->content)
				tmp->content = ft_lstnew(NULL, 0);
			return (concat(fd, line, (t_list **)&tmp->content));
		}
		tmp = tmp->next;
	}
	if (!(tmp = ft_lstnew(NULL, 0)))
		return (-1);
	tmp->content_size = fd;
	ft_lstadd(list, tmp);
	return (isnewfd(list, fd, line));
}

int					get_next_line(const int fd, char **line)
{
	static t_list	*list;
	char			buf[0];
	int				i;

	if (fd < 0 || read(fd, buf, 0) || line == NULL)
		return (-1);
	*line = NULL;
	if (!list)
	{
		if (!(list = ft_lstnew(NULL, 0)))
			return (-1);
		list->content_size = fd;
	}
	if (!(i = isnewfd(&list, fd, line)))
	{
		ft_memdel((void **)&list);
		return (i);
	}
	return (i);
}
