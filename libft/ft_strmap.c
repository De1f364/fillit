#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	str;
	char	*fresh;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strlen(s);
	fresh = ft_strnew(str);
	if (fresh == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		fresh[i] = f(s[i]);
		i++;
	}
	return (fresh);
}
