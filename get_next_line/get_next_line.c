/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 01:18:40 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/10 01:19:37 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*read_join(char *cache, int fd)
{
	char	*temp;

	temp = read_buf(fd);
	if (!temp)
	{
		free(cache);
		return (NULL);
	}
	cache = ft_join(cache, temp);
	return (cache);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- > 0)
		*p++ = (unsigned char)c;
	return ((void *) s);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	if (src == dest)
		return (dest);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (s < d)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

char	*ft_strdupto(char *src, char c)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	char	*out;

	i = 0;
	while (src[i] && src[i] != c)
		i++;
	if (src[i] == c)
		i++;
	out = malloc(i + 1);
	if (!out)
		return (NULL);
	j = 0;
	while (j < i)
	{
		out[j] = src[j];
		j++;
	}
	out[i] = '\0';
	src_len = ft_strlen(src);
	ft_memmove(src, src + i, src_len - i + 1);
	ft_memset(src + src_len - i, 0, i);
	return (out);
}

char	*get_next_line(int fd)
{
	static char	*cache;
	int			i;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!cache)
	{
		cache = malloc(BUFFER_SIZE + 1);
		if (!cache)
			return (NULL);
		ft_memset(cache, 0, BUFFER_SIZE + 1);
	}
	i = 0;
	while (cache[i] && cache[i] != '\n')
		i++;
	while (!cache[i])
	{
		cache = read_join(cache, fd);
		if (!cache)
			return (NULL);
		i = 0;
		while (cache[i] && cache[i] != '\n')
			i++;
	}
	return (ft_strdupto(cache, '\n'));
}
