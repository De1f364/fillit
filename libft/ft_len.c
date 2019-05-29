#include "libft.h"

int		ft_len(char const *str, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
