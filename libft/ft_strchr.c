/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <neddison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:36:45 by neddison          #+#    #+#             */
/*   Updated: 2019/04/26 19:11:19 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)s;
	while (i <= ft_strlen(s))
	{
		if (a[i] == (unsigned char)c)
			return ((char *)&a[i]);
		i++;
	}
	return (NULL);
}
