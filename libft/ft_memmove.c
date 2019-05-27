/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:38:37 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/19 21:10:56 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dist;
	unsigned const char	*source;
	size_t				num;

	dist = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (source < dist)
	{
		num = len;
		while (num > 0)
		{
			dist[num - 1] = source[num - 1];
			num--;
		}
	}
	if (source > dist)
		ft_memcpy(dist, source, len);
	return (dst);
}
