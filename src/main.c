/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 21:37:01 by rdonnor           #+#    #+#             */
/*   Updated: 2019/05/29 18:54:03 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int check_validation(int fd)
{
	char *str;
	char buf[BUFF_SIZE + 1];
	int ret;

	str = NULL;
	while ((ret = read(fd, buf, BUFF_SIZE) > 0))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		str = ft_strjoin(str, buf);
/*		ft_memdel(&list->content);
		list->content = ft_strdup(tmp);
		ft_strdel(&tmp);
		if (ft_strchr(buf, '\n'))
			break ;*/
	}


}

int main(int argc, char **argv)
{
	int fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		check_validation(fd);

	}
	else
		ft_putstr("usage: you need to put 1 file as parametr");

	return (0);
}