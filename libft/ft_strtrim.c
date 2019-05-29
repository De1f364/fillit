#include "libft.h"

static	char	ft_white_space(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0' && ft_white_space(s[i]))
		i++;
	j = ft_strlen(&s[i]) - 1;
	while (s[i] != '\0' && ft_white_space(s[j + i]))
		j--;
	str = ft_strnew(j + 1);
	if (str == 0)
		return (NULL);
	ft_strncpy(str, (s + i), (j + 1));
	return (str);
}
