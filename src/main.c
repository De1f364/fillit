#include "../includes/fillit.h"

int main(int argc, char **argv)
{
	int fd;
	int  ret;
	char *str;
	int count;

	count = 0;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret= get_next_line(fd, &str)) > 0)
		{
			count++;
			if (ft_strlen(str) != 4)
			{
				if (ft_strlen(str) != 0 && count == 5)
				{
					ft_putstr("error");
					break;
				}
				count = 0;
			}
		}
		if (ret == -1)
			ft_putstr("error");
	}
	else
		ft_putstr("usage: you need to put 1 file as parametr");

	return (0);
}