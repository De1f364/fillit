#include "../includes/fillit.h"

void    *make_str_map(char **str)
{
    char        *arr[26];
    int         i;

    i = 0;
    if (ft_strlen(*str) == 16)
    {
		arr[i] = ft_strnew(ft_strlen(*str));
		arr[i] = *str;
		i++;
	}
}


void read_file(int fd, char **str)
{
	int  ret;
	int count;
	char *tmp;

	tmp = NULL;
	count = 0;
	while ((ret= get_next_line(fd, str)) > 0)
	{
		count++;
		tmp  = ft_strjoin(tmp, *str);
		if (count == 5)
		{
			make_str_map(&tmp);
			ft_strdel(&tmp);
		}
		if (ft_strlen(*str) != 4)
		{
			if (ft_strlen(*str) != 0 && count == 5)
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

int main(int argc, char **argv)
{
	int fd;
	char *str;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		read_file(fd, &str);
	}
	else
		ft_putstr("usage: you need to put 1 file as parametr");

	return (0);
}