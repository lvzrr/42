/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:45:06 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/07 16:47:55 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *r1, const void *r2, size_t n)
{
	unsigned char	*_r1;
	unsigned char	*_r2;

	_r1 = (unsigned char *)r1;
	_r2 = (unsigned char *)r2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*_r1 != *_r2)
			return (*_r1 - *_r2);
		_r1++;
		_r2++;
		n--;
	}
	return (0);
}
