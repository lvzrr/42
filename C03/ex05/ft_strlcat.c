unsigned int	ft_strlen(char *c)
{
	unsigned int	l;

	l = 0;
	while(*c++)
		l++;
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int	n)
{
	unsigned int	d_len;

	d_len = ft_strlen(dest);
	if (n <= d_len)
		return (d_len);
	dest += d_len;
	while (*src && d_len < n)
	{
		*dest++ = *src++;
		d_len++;
	}
	*dest = 0;
	return (d_len);
}
