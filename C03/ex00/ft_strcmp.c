int	ft_strcmp(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a != *b)
			return ((unsigned char)*a - (unsigned char)*b);
		a++;
		b++;
	}
	return ((unsigned char)*a - (unsigned char)*b);
}
