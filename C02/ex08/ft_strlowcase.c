char	*ft_strlowcase(char *str)
{
	char	*r;

	r = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str -= ('A' - 'a');
		str++;
	}
	return (r);
}
