/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:36:30 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/14 14:27:41 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t len;
	size_t i;

	len = ft_strlen(s1);
	i = 0;
	while (n > 0 && s2[i] != '\0')
	{
		s1[len] = s2[i];
		n--;
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
