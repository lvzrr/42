char	*ft_strcpy(char	*dest, char *src)
{
	int	c;

	c = -1;
	while (src[++c] != '\0')
	{
		dest[c] = src[c];
	}
	return (dest);
}
