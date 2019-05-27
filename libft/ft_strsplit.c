/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 21:36:49 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/19 01:12:31 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_free(char **ptr)
{
	free(ptr);
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	int		j;
	char	**ptr;

	i = -1;
	j = 0;
	if (!s || !(ptr = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (++i < ft_count(s, c))
	{
		k = 0;
		if (!(ptr[i] = ft_strnew(ft_len(&s[j], c))))
		{
			while (i-- >= 0)
				free(ptr[i]);
			return (ft_free(ptr));
		}
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j] != '\0')
			ptr[i][k++] = s[j++];
	}
	ptr[i] = NULL;
	return (ptr);
}
