char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*r;

	r = dest;
	while (n-- != 0)
	{
		if (((*dest++ = *src++) == 0))
		{
			while (--n != 0)
				*dest++ = 0;
			break;
		}
	}
	return (r);
}
