unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	const char		*start;
	unsigned int	len;

	len = 0;
	start = src;
	while (*src++)
		len++;
	if (size == 0)
		return (len);
	while (*start && --size)
		*dst++ = *start++;
	*dst = '\0';
	return (len);
}
