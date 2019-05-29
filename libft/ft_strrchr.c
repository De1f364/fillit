#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	symbol;

	i = ft_strlen(s);
	symbol = (char)c;
	str = (char *)s;
	if (s == NULL)
		return (0);
	else
	{
		while (-1 < i)
		{
			if (str[i] == symbol)
				return (str + i);
			i--;
		}
	}
	return (NULL);
}
