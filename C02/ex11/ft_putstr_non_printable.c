#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_print_hex(unsigned char c, int rec_check)
{
	const char	*hex_base;

	hex_base = "0123456789abcdef";
	if (c >= 16)
	{
		ft_print_hex(c / 16, 1);
		ft_print_hex(c % 16, 1);
	}
	else
	{
		if (rec_check == 0)
			ft_putchar('0');
		ft_putchar(hex_base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_is_printable(*str))
			write(1, str, 1);
		else
		{
			ft_putchar('\\');
			ft_print_hex((unsigned char) *str, 0);
		}
		str++;
	}
}
