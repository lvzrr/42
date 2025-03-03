/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:43:13 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/01 16:43:14 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_args(char **arg1, char **arg2)
{
	char *temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

int	ft_partition(char **argv, int l, int h)
{
	char	*p;
	int		i;
	int		j;
	int		c;

	p = argv[h];
	i = l - 1;
	j = l;
	while (j < h)
	{
		while (argv[j][c] && p[c] 
				&& argv[j][c] == p[c])
            c++;
		if (argv[j][c] != p[c])
			{
				if (argv[j][c] < p[c])
				{
					i++;
					ft_swap_args(&argv[i], &argv[j]);
				}
			}
			j++;
		}
	}
	ft_swap_args(&argv[i + 1], &argv[h]);
	return (i + 1);
}

void	ft_quicksort(char **argv, int l, int h)
{
	if (l < h)
	{
		int p = ft_partition(argv, l, h);
		ft_quicksort(argv, l, p - 1);
		ft_quicksort(argv, p + 1, h);
	}
}

int main (int argc, char **argv)
{
	int c;
	int c2;

	ft_quicksort(argv, 1, argc - 1);
	c = 1;
	while (c < argc)
	{
		c2 = 0;
		while(argv[c][c2])
			write(1, argv[c][c2++], 1);
		c++;
	}
	return (0);
}
