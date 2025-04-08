/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:56:10 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/07 19:58:35 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(unsigned int n, unsigned int size)
{
	unsigned long	total;
	unsigned int	i;
	void			*alloc;

	total = n * size;
	if (n != 0 && total / n != size)
		return (0);
	alloc = malloc(total);
	if (!alloc)
		return (NULL);
	i = 0;
	while (i < total)
		((unsigned char *)alloc)[i++] = 0;
	return ((void *) alloc);
}
