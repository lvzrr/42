#include <unistd.h>

void	ft_print_alphabet(void)
{
	unsigned int	x;

	x = 'a' - 1;
	while (x++ < 'z')
		write(1, &x, 1);
}
