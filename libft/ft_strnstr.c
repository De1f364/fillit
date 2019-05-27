/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:25:49 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/11 21:59:45 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hays, const char *needl, size_t l)
{
	char	*hay;
	char	*need;
	size_t	i;
	size_t	j;

	hay = (char *)hays;
	need = (char *)needl;
	i = 0;
	if (need[i] == '\0')
		return (hay);
	if (need[i] == '\0' && hay[i] == '\0')
		return (NULL);
	while (hay[i] != '\0' && l-- >= ft_strlen(need))
	{
		j = 0;
		while (need[j] == hay[i + j])
		{
			if (need[j + 1] == '\0')
				return (hay + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
