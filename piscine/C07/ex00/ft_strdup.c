/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:46:42 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/05 15:46:43 by jaicastr         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		l;
	int		c;
	char	*dest;

	l = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * l);
	c = 0;
	while (c < l)
		dest[c++] = *src++;
	dest[c] = 0;
	return (dest);
}
