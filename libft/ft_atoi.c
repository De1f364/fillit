/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neddison <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:31:18 by neddison          #+#    #+#             */
/*   Updated: 2019/04/20 19:36:49 by neddison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t				i;
	long int			nbr;
	int					neg;

	neg = 1;
	i = 0;
	nbr = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
	|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nbr * 10 / 10 != nbr && neg == 1)
			return (-1);
		else if (nbr * 10 / 10 != nbr && neg == -1)
			return (0);
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(nbr * neg));
}
