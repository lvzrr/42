#include <unistd.h>

void	ft_print_comb(void)
{
	int		i;
	char 	out;
	
	i = 0;
	while (i < 1000)
	{
		if ((i / 100) < ((i / 10) % 10) && ((i / 10) % 10) < (i % 10))
		{
			out = '0' + (i / 100);
			write(1, &out, 1);
			out = '0' + (i / 10) % 10;
			write(1, &out, 1);
			out = '0' + (i % 10);
			write(1, &out, 1);
			if (i < 789)
				write(1, ", ", 2);
		}
		i++;
	}
}
