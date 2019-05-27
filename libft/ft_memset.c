/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:12:46 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/08 18:42:00 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	symbol;
	char			*str;
	size_t			count;

	symbol = (unsigned char)c;
	str = (char *)b;
	count = 0;
	while (count < len)
	{
		str[count] = symbol;
		count++;
	}
	return (b);
}
