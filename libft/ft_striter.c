#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(&s[i]);
		i++;
	}
}
