/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:43:13 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/03 19:21:41 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	c;
	int	c2;

	c = 1;
	while (c < argc)
	{
		c2 = 1 + c;
		while (c2 < argc)
		{
			if (ft_strcmp(argv[c], argv[c2]) > 0)
			{
				ft_swap(&argv[c], &argv[c2]);
			}
			c2++;
		}
		c++;
	}
	c = 1;
	while (c < argc)
		ft_putstr(argv[c++]);
	return (0);
}
