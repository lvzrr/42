int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}

int	ft_str_is_printable(char *str)
{
	if (ft_strlen(str) <= 1)
		return (1);
	while (*str != '\0')
	{
		if (!((*str >= 33) && (*str <= 126)))
			return (0);
		str++;
	}
	return (1);
}
