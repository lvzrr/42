/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:40:18 by jaicastr          #+#    #+#             */
/*   Updated: 2025/02/27 19:42:21 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	init;

	if (nb == 1)
		return (nb);
	if (nb < 0)
		return (0);
	init = 2;
	while (init < 46341)
	{
		if (init * init == nb)
			return (init);
		init++;
	}
	return (0);
}
