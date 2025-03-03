/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:55:54 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/01 11:59:28 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	init;

	if (nb < 0)
		return (0);
	init = 2;
	while (init < 46341
		|| init <= nb)
	{
		if (init * init == nb)
			return (init);
		init++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	c;
	int	sq;

	c = 2;
	sq = ft_sqrt(nb);
	if (sq == 0)
		sq = nb - 1;
	while (c <= sq)
	{
		if (nb % c == 0 || nb == 2)
			return (0);
		c++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
