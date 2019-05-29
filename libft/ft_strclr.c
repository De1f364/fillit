#include "libft.h"

void	ft_strclr(char *s)
{
	size_t i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}
