#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*str;
	size_t		i;

	if (!s)
		return (0);
	str = s;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
