#include "../includes/fillit.h"

char 	*create_map(int num) {
	char *map;
	int value;
	int i;
	int j;

	map = NULL;
	value = 0;
	while (value * value < num * 4)
		value++;
	map = ft_strnew(value * (value + 1));
	i = 0;
	j = 1;
	while (i < value * (value + 1))
	{
		if (i == value * value)
			map[i] = '\0';
		if (j != 4)
		{
			map[i] = '.';
			j++;
		}
		else
		{
			map[i] = '\n';
			j = 1;
		}
		i++;
	}
	return (map);
}