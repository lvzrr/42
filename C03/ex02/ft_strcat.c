char	*ft_strcat(char *dest, char *src)
{
	char *origin = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (origin);
}
