/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 23:15:57 by neddison          #+#    #+#             */
/*   Updated: 2019/04/10 23:37:57 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
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
		&& to_find[counter2] && str[counter + counter2])
		{
			if (to_find[counter2 + 1] == '\0')
				return ((char *)&str[counter]);
			counter2++;
		}
		counter++;
	}
	return (0);
}
