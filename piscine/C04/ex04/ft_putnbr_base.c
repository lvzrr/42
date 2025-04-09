/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:31:27 by jaicastr          #+#    #+#             */
/*   Updated: 2025/02/26 18:35:51 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_valid_base(char *base, unsigned int size)
{
	char	*dup;

	if (size <= 1)
		return (0);
	while (*base)
	{
		dup = base + 1;
		while (*dup)
			if (*dup++ == *base)
				return (0);
		if (*base == '-' || *base == '+')
			return (0);
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	char				out;
	char				*l;
	unsigned int		i;
	unsigned int		n;	

	i = 0;
	l = base;
	while (*l++)
		i++;
	l = base;
	if (!ft_check_valid_base(base, i))
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	n = (unsigned int) nb;
	if (n >= i)
		ft_putnbr_base(nb / i, base);
	out = base[nb % i];
	write(1, &out, 1);
}
