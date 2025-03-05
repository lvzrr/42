/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:46:50 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/05 15:47:01 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	c;

	if (max <= min)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	c = 0;
	while (min < max)
		tab[c++] = min++;
	return (tab);
}
