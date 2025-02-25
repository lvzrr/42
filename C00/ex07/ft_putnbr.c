#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	out;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	out = '0' + nb % 10;
	write(1, &out, 1);
}
