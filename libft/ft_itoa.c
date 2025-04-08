/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:53:08 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/08 13:05:45 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	calc_size(long *_n)
{
	unsigned int	i;
	long			tmp;

	i = 0;
	if (*_n <= 0)
	{
		*_n = -*_n;
		i++;
	}
	tmp = *_n;
	while (*_n > 0)
	{
		i++;
		*_n /= 10;
	}
	*_n = tmp;
	return (i);
}

char	*ft_itoa(int n)
{
	char			*out;
	unsigned int	c;
	long			_n;

	_n = (long) n;
	c = calc_size(&_n);
	out = malloc(c + 1);
	if (!out)
	 return (NULL);
	if (n < 0)
		out[0] = '-';
	out[c] = 0;
	if (_n == 0)
		out[0] = '0';
	while (_n >= 0 && out[--c] != '-')
	{
		out[c] = (_n % 10) + '0';
		_n /= 10;
	}
	return (out);
}
