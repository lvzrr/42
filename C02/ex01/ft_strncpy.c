char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*r;

	r = dest;
	while (*src && *dest && n--)
		*dest++ = *src++;
	while (*dest)
		*dest++ = '\0';
	return (r);
}
