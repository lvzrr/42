#include <unistd.h>

int	ft_check_num(int n, int div)
{
	int	prev;

	prev = -1;
	div /= 10;
	while (div)
	{
		if (prev >= (n / div) % 10)
			return (0);
		prev = (n / div) % 10;
		div /= 10;
	}
	return (1);
}


void	ft_print_combn(int nb)
{
	int		mul;
	int		div;
	int		c;
	char	out;
	int		first;

	if (nb <= 0 || nb >= 10)
		return;
	div = 1;
	c = -1;
	while (++c < nb)
		div *= 10;
	c = -1;
	first = 1;
	while (++c < div)
	{
		mul = div / 10;
		if (ft_check_num(c, div))
		{
			if (!first)
				write(1, ", ", 2);
			else
				first = 0;
			while (mul)
			{
				out = '0' + (c / mul) % 10;
				write(1, &out, 1);
				mul /= 10;
			}
		}
	}
}
