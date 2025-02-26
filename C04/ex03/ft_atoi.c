int	ft_atoi(char *str)
{
	int	neg;
	int	out;

	neg = 1;
	out = 0;
	if (!*str)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		out = out * 10 + (*str - '0');
		str++;
	}
	return (out * neg);
}
