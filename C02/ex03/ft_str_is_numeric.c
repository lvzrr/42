int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(('0' <= *str) && ('9' >= *str)))
			return (0);
		str++;
	}
	return (1);
}
