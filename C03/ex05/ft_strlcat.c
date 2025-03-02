/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:26:05 by jaicastr          #+#    #+#             */
/*   Updated: 2025/02/26 12:23:00 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *c)
{
	unsigned int	l;

	l = 0;
	while (*c++)
		l++;
	return (l);
}

int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	d2_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	d2_len = d_len;
	if (size <= d_len)
		return (s_len + size);
	while (*dst)
		dst++;
	while (*src && d_len++ < size - 1)
		*dst++ = *src++;
	*dst = '\0';
	return (d2_len + s_len);
}
