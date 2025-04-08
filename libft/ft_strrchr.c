/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:01:43 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/07 16:05:16 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *haystack, int needle)
{
	unsigned int	l;

	l = 0;
	while (haystack[l])
		l++;
	while (l != 0 && haystack[l] != needle)
		l--;
	return ((char *)(haystack + l));
}
