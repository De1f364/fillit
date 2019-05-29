#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	symbol;
	char	*str;
	size_t	i;

	symbol = (char)c;
	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == symbol)
			return (str + i);
		i++;
	}
	if (symbol == '\0')
		return (str + i);
	else
		return (NULL);
}
