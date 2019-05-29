#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			num;

	str = (unsigned char *)s;
	num = 0;
	if (n == 0)
		return ;
	else
	{
		while (num < n)
		{
			str[num] = 0;
			num++;
		}
	}
}
