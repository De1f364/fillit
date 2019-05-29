#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*str1;
	size_t	i;

	i = 0;
	str = (char *)s1;
	while (str[i] != '\0')
		i++;
	str1 = (char *)malloc(sizeof(char) * (i + 1));
	if (str1 == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		str1[i] = str[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
