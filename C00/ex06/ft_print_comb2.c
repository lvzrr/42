/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:35:19 by jaicastr          #+#    #+#             */
/*   Updated: 2025/02/20 22:34:58 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putchar('0' + (i / 10));
			ft_putchar('0' + i % 10);
			ft_putchar(' ');
			ft_putchar('0' + (j / 10));
			ft_putchar('0' + j % 10);
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		j = 0;
		i++;
	}
}
