/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:28:00 by neddison          #+#    #+#             */
/*   Updated: 2019/04/20 19:38:18 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	i = 0;
	a = dst;
	b = (char *)src;
	if (dst == src)
		return (dst);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
