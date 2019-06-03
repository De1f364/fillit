/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:24:40 by neddison          #+#    #+#             */
/*   Updated: 2019/04/16 18:43:01 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr(char const *str)
{
	size_t		i;

	i = 0;
	if (str)
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
}
