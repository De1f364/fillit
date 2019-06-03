/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:43:03 by neddison          #+#    #+#             */
/*   Updated: 2019/04/15 22:07:30 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	smb;
	size_t			i;

	i = -1;
	smb = (unsigned char)c;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	while (++i < n)
	{
		a[i] = b[i];
		if (b[i] == smb)
			return (a + i + 1);
	}
	return (NULL);
}
