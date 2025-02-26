int	ft_strncmp(char *s1, char *s2, unsigned int size)
{
	while (size > 0)
	{
		if (*s1 != *s2 || !*s1 ||!*s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		size--;
	}
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
