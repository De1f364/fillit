#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t len;
	size_t len1;
	size_t i;

	i = 0;
	len = 0;
	len1 = ft_strlen(dst);
	if (dst == NULL && src == NULL && n == 0)
		return (0);
	while (dst[len] != '\0' && len < n)
		len++;
	if (!(len < n))
		return (n + ft_strlen(src));
	while (src[i] && i < (n - len1 - 1))
	{
		dst[len + i] = ((char *)src)[i];
		i++;
	}
	dst[len + i] = '\0';
	return (len + ft_strlen(src));
}
