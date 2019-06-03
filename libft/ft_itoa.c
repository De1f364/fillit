/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <neddison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 18:58:55 by neddison          #+#    #+#             */
/*   Updated: 2019/04/28 16:40:17 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		count_dgt(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	size_t		count;
	char		*tab;
	int			i;

	count = count_dgt(n);
	if (!(tab = ft_strnew(count)))
		return (NULL);
	if (n == 0)
	{
		tab[0] = 48;
		return (tab);
	}
	if (n < 0)
		tab[0] = '-';
	while (count - 1 > 0)
	{
		i = n % 10;
		if (i < 0)
			i = -i;
		tab[count-- - 1] = i + 48;
		n = n / 10;
	}
	if (n > 0)
		tab[0] = n + 48;
	return (tab);
}
