/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 01:11:22 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/19 00:25:31 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_minus(int *n, int *minus)
{
	if (*n < 0)
	{
		*n *= -1;
		*minus = 1;
	}
}

char		*ft_itoa(int n)
{
	int		number;
	int		length;
	int		minus;
	char	*str;

	number = n;
	length = 2;
	minus = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_minus(&n, &minus);
	while (number /= 10)
		length++;
	length = length + minus;
	if (!(str = (char *)malloc(length * sizeof(char))))
		return (NULL);
	str[--length] = '\0';
	while (length--)
	{
		str[length] = n % 10 + '0';
		n = n / 10;
	}
	if (minus == 1)
		str[0] = '-';
	return (str);
}
