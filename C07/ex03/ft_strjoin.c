/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:47:00 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/05 22:09:58 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

void	ft_strcpyfrom(char *dest, char *src, int *n)
{
	dest += *n;
	while (*src)
	{
		*dest++ = *src++;
		(*n)++;
	}
}

int	calcl(char *sep, char **strs, int size)
{
	int	alls;
	int	c;

	c = 0;
	alls = 1 + (ft_strlen(sep) * size - 1);
	while (c < size)
		alls += ft_strlen(strs[c++]);
	return (alls);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		alls;
	int		c;
	int		pos;
	char	*r;

	if (size <= 0)
	{
		r = (char *)malloc(1);
		*r = 0;
		return (r);
	}
	alls = calcl(sep, strs, size);
	r = (char *)malloc(alls);
	if (r == NULL)
		return (NULL);
	c = 0;
	pos = 0;
	while (c < size)
	{
		ft_strcpyfrom(r, strs[c++], &pos);
		if (pos < alls - ft_strlen(sep))
			ft_strcpyfrom(r, sep, &pos);
	}
	r[pos] = 0;
	return (r);
}
