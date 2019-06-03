/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 16:37:56 by neddison          #+#    #+#             */
/*   Updated: 2019/04/13 16:37:56 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			strt;
	size_t			i;
	char			*tab;

	i = 0;
	strt = (size_t)start;
	tab = ft_strnew(len);
	if (!s)
		return (NULL);
	if (tab == NULL)
		return (NULL);
	while (s[i + strt] && (i < len))
	{
		tab[i] = s[i + strt];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
