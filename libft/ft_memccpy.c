/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:43:48 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/08 20:55:36 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dist;
	char			*source;
	unsigned char	symbol;
	size_t			num;

	dist = (unsigned char *)dst;
	source = (char *)src;
	symbol = (unsigned char)c;
	num = 0;
	while (num < n)
	{
		if ((*dist++ = *source++) == symbol)
		{
			return (dist);
		}
		num++;
	}
	return (NULL);
}
