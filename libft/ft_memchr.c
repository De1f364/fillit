/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:28:12 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/08 21:11:28 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*array;
	unsigned char	symbol;
	unsigned char	*tmp;
	size_t			num;

	array = (unsigned char *)s;
	symbol = (unsigned char)c;
	num = 0;
	while (num < n)
	{
		if (array[num] == symbol)
		{
			tmp = &array[num];
			return (tmp);
		}
		num++;
	}
	return (NULL);
}
