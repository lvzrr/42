#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	unsigned int	x;

	x = 'z' + 1;
	while (x-- > 'a')
		write(1, &x, 1);
}
