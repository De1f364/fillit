#include "../includes/fillit.h"

int 	check_block(char *str)
{
	return (0);
}

int 	check_valid(char *str)
{
	int		i;

	i = 0;
	if (str == NULL || str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (i >= 546)
			return (0);
		if (check_block(&str[i]) == 0)
			return (0);
		i += 19;
		if (str[i + 1] && str[i + 2] == '\0')
			return (0);
		if (str[i + 1] == '\n')
			i += 2;
		else
			break;
	}
}

char	*read_file(int fd)
{
	char	*str;
	char 	*tmp;
	int 	rd;

	tmp = ft_strnew(20);
	if ((fd < 0 || read(fd, tmp, 0) < 0))
		return (NULL);
	str = (char*)ft_memalloc(sizeof(char));
	while ((rd = read(fd, tmp, 20)))
	{
		tmp[rd] = '\0';
		str = ft_strjoin(str, tmp);
		if (ft_strlen(str) > 570)
			return (NULL);
	}
	ft_memdel((void**)&tmp);
	str = ft_strjoin(str, "\0");
	return (str);
}
