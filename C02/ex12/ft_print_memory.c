#include <unistd.h>

void	ft_put_ptr_addr(unsigned long addr, unsigned long div)
{
	const char	*hex_base;

	hex_base = "0123456789abcdef";
	if (addr >= 16)
	{
		ft_put_ptr_addr(addr / div, div / 10);
		ft_put_ptr_addr(addr % div, div / 10);
	}
	else
	{
		write(1, &hex_base[addr], 1);
	}
}

void	ft_print_str(char *str)
{
	unsigned int	i;
	unsigned int	rem;

	i = 0;
	while (i < 16 && *str)
	{
		if (str[i] >= 33 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	rem = i % 16;
	i = 0;
	if (rem > 0)
	{
		while (i <= rem)
		{
			write(1, ".", 1);
			i++;
		}
	}
}

void	ft_print_hex_char(unsigned char c, int rec_check)
{
	const char	*hex_base;

	hex_base = "0123456789abcdef";
	if (c >= 16)
	{
		ft_print_hex_char(c / 16, 1);
		ft_print_hex_char(c % 16, 1);
	}
	else
	{
		if (rec_check == 0)
			write(1, "0", 1);
		write(1, &hex_base[c], 1);
	}
}

void	ft_print_hex_str(char *str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (str[i])
			ft_print_hex_char(str[i], 0);
		else
		{
			write(1, "00", 2);
		}
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	c;
	unsigned long	l;
	char			*ch;

	c = 0;
	l = (unsigned long)addr;
	ch = (char *)addr;
	while (c < size)
	{
		ft_put_ptr_addr(l + c, 1600000000000000000);
		write(1, ": ", 2);
		ft_print_hex_str(&ch[c]);
		write(1, " ", 1);
		ft_print_str(&ch[c]);
		write(1, "\n", 1);
		c += 16;
	}
}
