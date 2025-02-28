/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:19:54 by jaicastr          #+#    #+#             */
/*   Updated: 2025/02/27 19:24:48 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	out;

	if ((nb == 0 && power != 0
			|| power <= 0)
		return (0);
	if (nb == 1 || (nb == 0
			&& power == 0))
		return (1);
	while(--power)
		nb *= nb;
	return (nb);
}
