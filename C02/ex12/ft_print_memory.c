#include <unistd.h>

void	ft_put_ptr_addr(unsigned long addr)
{
	const char		*hex_base;
	unsigned long	div;
	int				i;
	char			c;

	hex_base = "0123456789abcdef";
	div = 1;
	i = -1;
	while (++i < 15)
		div *= 16;
	while (div)
	{
		c = hex_base[(addr / div) % 16];
		write(1, &c, 1);
		div /= 16;
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

void	ft_print_hex_str(char *str)
{
	int				i;
	const char		*hex_base;
	unsigned char	c;

	i = 0;
	hex_base = "0123456789abcdef";
	while (i < 16)
	{
		if (str[i])
			c = (unsigned char)str[i];
		else
			c = 0;
		write(1, &hex_base[c / 16], 1);
		write(1, &hex_base[c % 16], 1);
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
		ft_put_ptr_addr(l + c);
		write(1, ": ", 2);
		ft_print_hex_str(&ch[c]);
		write(1, " ", 1);
		ft_print_str(&ch[c]);
		write(1, "\n", 1);
		c += 16;
	}
}

int	main(void)
{
	char	*tab;

	tab = "Hello, World";
	ft_print_memory(tab, 12);
	return (0);
}
