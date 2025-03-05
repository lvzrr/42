#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

char	*ft_strdup(char *src)
{
	int		l;
	int		c;
	char	*dest;

	l = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * l);
	c = 0;
	while (c < l)
		dest[c++] = *src++;
	dest[c] = 0;
	return (dest);
}
