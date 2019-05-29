/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 21:37:01 by rdonnor           #+#    #+#             */
/*   Updated: 2019/05/29 18:49:57 by rdonnor          ###   ########.fr       */
.fr       */
=======
/*   Updated: 2019/05/29 18:29:45 by neddison         ###   ########.fr       */
>>>>>>> ca73e4865f542d94ca7738b9869da0a239fc5402
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int main(int argc, char **argv)
{
	int fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);

	}
	else
		ft_putstr("usage: you need to put 1 file as parametr");

	return (0);
}