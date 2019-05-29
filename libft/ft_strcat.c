#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t len_s1;
	size_t i;

	len_s1 = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len_s1] = s2[i];
		i++;
		len_s1++;
	}
	s1[len_s1] = '\0';
	return (s1);
}
