#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*hay;
	char	*need;
	size_t	i;
	size_t	j;

	hay = (char *)haystack;
	need = (char *)needle;
	i = 0;
	if (need[i] == '\0')
		return (hay);
	if (need[i] == '\0' && hay[i] == '\0')
		return (NULL);
	while (hay[i] != '\0')
	{
		j = 0;
		while (need[j] == hay[i + j])
		{
			if (need[j + 1] == '\0')
				return (hay + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
