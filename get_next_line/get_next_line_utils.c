/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:13:23 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/10 15:13:36 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

void	free_buffers(void *a, void *b, void *c)
{
	if (a)
		free(a);
	if (b)
		free(b);
	if (c)
		free(c);
}

size_t	ft_strlen(char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

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

char	*ft_join(char *s1, char *s2)
{
	size_t	l;
	char	*out;

	l = ft_strlen(s1) + ft_strlen(s2) + 1;
	out = malloc(l);
	if (!out)
		return (NULL);
	ft_memset(out, 0, l);
	ft_strlcat(out, s1, l);
	ft_strlcat(out, s2, l);
	free_buffers(s1, s2, NULL);
	return (out);
}

char	*read_buf(int fd)
{
	char	*buf;
	int		bytes_read;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	bytes_read = read(fd, buf, BUFFER_SIZE);
	if (bytes_read <= 0)
	{
		free(buf);
		return (NULL);
	}
	buf[bytes_read] = '\0';
	return (buf);
}
