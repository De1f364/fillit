/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdonnor <rdonnor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:47:52 by rdonnor           #+#    #+#             */
/*   Updated: 2019/04/19 21:40:04 by rdonnor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			str;
	char			*fresh;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strlen(s);
	fresh = ft_strnew(str);
	if (fresh == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		fresh[i] = f(i, s[i]);
		i++;
	}
	return (fresh);
}
