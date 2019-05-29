#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*array;
	unsigned char	symbol;
	unsigned char	*tmp;
	size_t			num;

	array = (unsigned char *)s;
	symbol = (unsigned char)c;
	num = 0;
	while (num < n)
	{
		if (array[num] == symbol)
		{
			tmp = &array[num];
			return (tmp);
		}
		num++;
	}
	return (NULL);
}
