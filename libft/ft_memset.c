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
