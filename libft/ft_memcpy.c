#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dist;
	unsigned const char	*source;

	dist = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	while (n > i)
	{
		dist[i] = source[i];
		i++;
	}
	return (dst);
}
