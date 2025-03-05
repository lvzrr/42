#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;

	if (max <= min)
	{
		*range = NULL;
		return (-1);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	c = 0;
	while (min < max)
		(*range)[c++] = min++;
	return (c);
}
