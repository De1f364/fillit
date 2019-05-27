/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:21:04 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/19 21:06:56 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dist;
	unsigned const char	*source;

	dist = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	while (n > i)
	{
		dist[i] = source[i];
		i++;
	}
	return (dst);
}
