#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			num;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	num = 0;
	if (str1 == str2)
		return (0);
	while (num < n)
	{
		if (str1[num] != str2[num])
			return (str1[num] - str2[num]);
		num++;
	}
	return (0);
}
