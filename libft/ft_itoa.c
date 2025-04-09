/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:43:29 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/08 17:44:23 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	count(int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static int	_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

char	*ft_itoa(int n)
{
	int				neg;
	char			*out;
	unsigned int	cc;

	cc = count(n);
	neg = 1;
	out = malloc(cc + 1);
	if (!out)
		return (NULL);
	if (n < 0)
	{
		out[0] = '-';
		neg = -1;
	}
	out[cc] = 0;
	while (cc > 0 || n != 0)
	{
		if (neg == -1 && cc == 1)
			break ;
		out[--cc] = '0' + _abs(n % 10);
		n /= 10;
	}
	return (out);
}
