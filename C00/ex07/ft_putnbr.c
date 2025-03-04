/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 21:10:56 by jaicastr          #+#    #+#             */
/*   Updated: 2025/02/20 22:08:58 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	out;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
	{
		out = '0';
		write(1, &out, 1);
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			out = '-';
			write(1, &out, 1);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		out = '0' + (nb % 10);
		write(1, &out, 1);
	}
}
