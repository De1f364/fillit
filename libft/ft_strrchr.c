/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:51:30 by neddison          #+#    #+#             */
/*   Updated: 2019/04/10 23:06:08 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*a;
	size_t			i;

	i = ft_strlen(s);
	a = (unsigned char *)s;
	while (i)
	{
		if (a[i] == (unsigned char)c)
			return ((char *)&a[i]);
		i--;
	}
	if (i == 0 && a[i] == (unsigned char)c)
		return ((char *)&a[i]);
	return (NULL);
}
