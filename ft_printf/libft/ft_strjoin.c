/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:53:59 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/08 10:55:00 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	l1;
	unsigned int	l2;
	unsigned int	i;
	unsigned int	j;
	char			*out;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	out = malloc(l1 + l2 + 1);
	if (!out)
		return (NULL);
	i = 0;
	j = 0;
	while (j < l1)
		out[i++] = s1[j++];
	j = 0;
	while (j < l2)
		out[i++] = s2[j++];
	out[i] = 0;
	return (out);
}
