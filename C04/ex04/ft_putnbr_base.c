#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

int	ft_is_dupl(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	ft_check_valid_base(char *base)
{
	if (ft_strlen(base) <= 1)
		return (0);
	while (*base)
	{
		if (ft_is_dupl(*base, base + 1) || *base == '-' || *base == '+')
			return (0);
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	char				out;
	unsigned int		i;
	unsigned int		n;	

	i = ft_strlen(base);
	if (ft_check_valid_base(base))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		n = (unsigned int) nb;
		if (n >= i)
			ft_putnbr_base(nb / i, base);
		out = base[nb % i];
		write(1, &out, 1);
	}
}
