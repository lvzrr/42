int	ft_strncmp(char *s1, char *s2, unsigned int size)
{
	while (*s1 && *s2 && size--)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	if (size)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	l;

	l = ft_strlen(to_find);
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (ft_strncmp(str, to_find, l) == 0)
			return (str);
		str++;
	}
	return (NULL);
}
