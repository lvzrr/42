#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	c;

	if (max <= min)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	c = 0;
	while (min < max)
		tab[c++] = min++;
	return (tab);
}
