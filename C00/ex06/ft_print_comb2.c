#include <unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	out;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			out = '0' + (i / 10);
			write(1, &out, 1);
			out = '0' + (i % 10);
			write(1, &out, 1);
			write(1, " ", 1);
			out = '0' + (j / 10);
			write(1, &out, 1);
			out = '0' + (j % 10);
			write(1, &out, 1);
			if (i != 98 || j != 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
