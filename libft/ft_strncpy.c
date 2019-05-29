#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	ft_bzero(dst, len);
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
