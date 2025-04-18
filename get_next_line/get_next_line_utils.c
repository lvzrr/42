/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:49:02 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/18 16:49:03 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	unsigned int	j;
	char			*out;

	if (!s)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	j = 0;
	while (j < len && s[start])
		out[j++] = s[start++];
	out[j] = 0;
	return (out);
}

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

size_t	ft_strlen(const char *str)
{
	size_t	x;

	if (!str)
		return (0);
	x = 0;
	while (str[x])
		x++;
	return (x);
}

char	*ft_strchr(const char *haystack, int needle)
{
	unsigned int	i;

	i = 0;
	while (haystack[i] && haystack[i] != (char)needle)
		i++;
	if (haystack[i] == 0 && (char)needle != 0)
		return ((void *) 0);
	return ((char *)(haystack + i));
}

char	*ft_strdup(const char *str)
{
	unsigned int	i;
	unsigned int	n;
	char			*newstr;

	n = 0;
	while (str[n])
		n++;
	i = 0;
	newstr = (char *)malloc(n + 1);
	if (!newstr)
		return ((void *) 0);
	while (i < n)
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = 0;
	return (newstr);
}
