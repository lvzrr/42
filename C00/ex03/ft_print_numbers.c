#include <unistd.h>

void	ft_print_numbers(void)
{
	unsigned int	x;

	x = '0' - 1;
	while(x++ < '9')
		write(1, &x, 1);
}
