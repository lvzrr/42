/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:39:53 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/07 19:50:33 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int n)
{
	unsigned int	srclen;
	unsigned int	dstlen;
	unsigned int	i;

	srclen = 0;
	while (src[srclen])
		srclen++;
	dstlen = 0;
	while (dest[dstlen] && dstlen < n)
		dstlen++;
	if (n <= dstlen)
		return (srclen + n);
	i = 0;
	while (dstlen + i < n - 1 && src[i])
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = 0;
	return (srclen + dstlen);
}
