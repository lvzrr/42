char	*ft_strcpy(char	*dest, char *src)
{
	char	*r;

	r = dest;
	while (*src)
		*dest++ = *src++;
	return (r);
}
