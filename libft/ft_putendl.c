/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:43:54 by neddison          #+#    #+#             */
/*   Updated: 2019/04/11 18:43:54 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl(char const *s)
{
	size_t		i;

	i = 0;
	if (s)
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
	ft_putchar('\n');
}
