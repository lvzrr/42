char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*r;
	unsigned int	i;

	r = dest;
	i = 0;
	while (i++ < n && *src)
		*dest++ = *src++;
	while (i++ < n)
		*dest++ = '\0';
	return (r);
}
