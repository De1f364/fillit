/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:12:31 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/19 21:03:25 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			num;

	str = (unsigned char *)s;
	num = 0;
	if (n == 0)
		return ;
	else
	{
		while (num < n)
		{
			str[num] = 0;
			num++;
		}
	}
}
