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

void	ft_print_str(char *str, unsigned int *size)
{
	unsigned int	i;

	i = 0;
	while (i < 16 && *size > 0)
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
		*size -= 1;
	}
}

void	ft_print_hex_str(char *str, unsigned int *size)
{
	int				i;
	const char		*hex_base;
	unsigned char	c;

	i = 0;
	hex_base = "0123456789abcdef";
	while (i < 16 && *size)
	{
		c = (unsigned char)str[i];
		write(1, &hex_base[c / 16], 1);
		write(1, &hex_base[c % 16], 1);
		if (i % 2)
			write(1, " ", 1);
		i++;
		*size -= 1;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	c;
	unsigned long	l;
	char			*ch;
	unsigned int	h_l;
	unsigned int	s_l;

	h_l = size;
	s_l = h_l;
	c = 0;
	l = (unsigned long)addr;
	ch = (char *)addr;
	while (c < size)
	{
		ft_put_ptr_addr(l + c);
		write(1, ": ", 2);
		ft_print_hex_str(&ch[c], &h_l);
		write(1, " ", 1);
		ft_print_str(&ch[c], &s_l);
		write(1, "\n", 1);
		c += 16;
	}
	return (addr);
}
