#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t				index;
	int					minus;
	long int			number;

	index = 0;
	minus = 1;
	number = 0;
	while (str[index] == '\n' || str[index] == '\t' || str[index] == '\v' ||
	str[index] == ' ' || str[index] == '\f' || str[index] == '\r')
		index++;
	if (str[index] == '-')
		minus = -1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{
		if (number * 10 / 10 != number && minus == 1)
			return (-1);
		else if (number * 10 / 10 != number && minus == -1)
			return (0);
		number = 10 * number + str[index] - '0';
		index++;
	}
	return ((int)(number * minus));
}
