/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:24:35 by neddison          #+#    #+#             */
/*   Updated: 2019/04/11 18:24:35 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char const *str, int fd)
{
	size_t		i;

	i = 0;
	if (str)
		while (str[i])
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
}
