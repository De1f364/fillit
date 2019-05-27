/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 17:14:43 by rdonnor           #+#    #+#             */
/*   Updated: 2019/05/27 20:27:25 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*t_list *ft_return_list(int fd, t_list **list)
{
	t_list *tmp;
	tmp = *list;

	while(tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew(NULL, 0);
	ft_lstadd(list,tmp);
	tmp = *list;
	return (tmp);
	}*/

int		ft_check_line(t_list *list, char **line)
{
	char *str;

	if (!(ft_strchr(list->content, '\n')))
	{
		*line = ft_strdup(list->content);
		ft_memdel(&list->content);
		return (1);
	}
	str = ft_strdup(ft_strchr(list->content, '\n'));
	*line = ft_strndup(list->content, '\n');
	ft_memdel(&list->content);
	list->content = ft_strdup(str + 1);
	ft_strdel(&str);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*list;
	char			*tmp;
	char			buf[BUFF_SIZE + 1];
	int				ret;

	if (fd < 0 || !line)
		return (-1);
	if (!list)
		list = ft_lstnew(NULL, 0);
	list->content_size = fd;
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		tmp = ft_strjoin(list->content, buf);
		ft_memdel(&list->content);
		list->content = ft_strdup(tmp);
		ft_strdel(&tmp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(list->content))
		return (0);
	return (ft_check_line(list, line));
}
