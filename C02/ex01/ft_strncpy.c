char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = -1;
	while (++c < n)
	{
		dest[c] = src[c];
	}
	return (dest);
}
