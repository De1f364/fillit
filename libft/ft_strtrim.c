/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 16:37:37 by neddison          #+#    #+#             */
/*   Updated: 2019/04/16 18:38:19 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		start(const char *s)
{
	int			i;
	int			count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		count++;
		i++;
	}
	if (s[i] == '\0')
		return (-1);
	return (count);
}

static int		end(const char *s)
{
	int			i;
	int			count;

	i = ft_strlen(s) - 1;
	count = 0;
	if (!s)
		return (0);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		count++;
		i--;
	}
	return (count);
}

char			*ft_strtrim(char const *s)
{
	int			first;
	int			last;
	int			i;
	char		*tab;

	if (!s)
		return (NULL);
	i = 0;
	first = start(s);
	last = ft_strlen(s) - end(s);
	if (first < last)
	{
		tab = ft_strnew(last - first);
		if (tab == NULL)
			return (NULL);
		while (s[1] && first < last)
		{
			tab[i] = s[first];
			first++;
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
	return (NULL);
}
