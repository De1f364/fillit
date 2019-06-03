/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 18:29:14 by neddison          #+#    #+#             */
/*   Updated: 2019/04/15 22:09:36 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)s;
	while (a[i])
		i++;
	return (i);
}
