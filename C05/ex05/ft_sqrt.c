/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:40:18 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/04 12:39:41 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	init;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	init = 1;
	while (init <= 46340 && init * init <= nb + 1)
	{
		if (init * init == nb)
			return (init);
		init++;
	}
	return (0);
}
