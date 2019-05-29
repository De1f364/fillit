#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dist;
	unsigned const char	*source;
	size_t				num;

	dist = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (source < dist)
	{
		num = len;
		while (num > 0)
		{
			dist[num - 1] = source[num - 1];
			num--;
		}
	}
	if (source > dist)
		ft_memcpy(dist, source, len);
	return (dst);
}
