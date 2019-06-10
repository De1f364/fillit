#include "../includes/fillit.h"

int 	check_tetro(const char *str)
{
	int 	i;
	int 	count;

	i = 0;
	count = 0;
	while (i <= 19)
	{
		if (str[i] == '#')
		{
			if (str[i - 5] == '#' && i - 5 >= 0)
				count++;
			if (str[i - 1] == '#' && i - 1 >= 0)
				count++;
			if (str[i + 1] == '#' && i + 1 <= 19)
				count++;
			if (str[i + 5] == '#' && i + 5 <= 19)
				count++;
		}
		i++;
	}
	if (count == 6 || count == 8)
		return (1);
	return (0);
}

int 	check_block(const char *str)
{
	int		i;
	int 	k;

	i = 0;
	k = 0;
	while ((str[i] == '.' || str[i] == '#' || str[i] == '\n') && k < 5 && str[i])
	{
		if (i == 20)
			break;
		if (((i + 1) % 5 == 0) && str[i] != '\n' && i != 0)
			return (0);
		if (str[i] == '#')
			k++;
		i++;
	}
	if (k == 4 && check_tetro(str))
	{
		if (((str[i] == '\n' && str[i - 1] == '\n') || str[i] == '\0') && i == 20)
			return (1);
	}

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
