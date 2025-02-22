int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str++ != '\0')
		c++;
	return (c);
}
