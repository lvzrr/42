/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:26:42 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/04 12:39:11 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	prev;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	prev = nb;
	while (--prev)
		nb *= prev;
	return (nb);
}
