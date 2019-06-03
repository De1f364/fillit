/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:48:34 by neddison          #+#    #+#             */
/*   Updated: 2019/04/11 20:02:21 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			counter;
	size_t			counter2;
	unsigned char	*str;
	unsigned char	*to_find;

	str = (unsigned char *)haystack;
	to_find = (unsigned char *)needle;
	counter = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[counter] != '\0')
	{
		counter2 = 0;
		while (to_find[counter2] == str[counter + counter2]
		&& to_find[counter2] && str[counter + counter2]
		&& (counter + counter2) < len)
		{
			if (to_find[counter2 + 1] == '\0')
				return ((char *)&str[counter]);
			counter2++;
		}
		counter++;
	}
	return (0);
}
