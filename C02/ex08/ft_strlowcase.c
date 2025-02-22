int	ft_char_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_char_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strlowcase(char *str)
{
	int	c;

	c = -1;
	while (str[++c] != '\0')
	{
		if (ft_char_upper(str[c]) && !ft_char_lower(str[c]))
		{
			str[c] -= 'A';
			str[c] += 'a';
		}
	}
	return (str);
}
