void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	ft_partition(int *arr, int low, int high)
{
	int	pivot;
	int	left;
	int	right;

	pivot = arr[low];
	left = low + 1;
	right = high;
	while (1)
	{
		while (left <= right && arr[left] <= pivot)
			left++;
		while (left <= right && arr[right] > pivot)
			right--;
		if (left > right)
			break ;
		ft_swap(&arr[left], &arr[right]);
	}
	ft_swap(&arr[low], &arr[right]);
	return (right);
}

void	ft_qsort(int *arr, int low, int high)
{
	int	p;

	if (low < high)
	{
		p = ft_partition(arr, low, high);
		ft_qsort(arr, low, p - 1);
		ft_qsort(arr, p + 1, high);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	if (size > 1)
		ft_qsort(tab, 0, size - 1);
}
