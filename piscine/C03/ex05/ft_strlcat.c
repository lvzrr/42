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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	d_len;
	unsigned int	d_len2;
	unsigned int	s_len;

	d_len = ft_strlen(dest);
	d_len2 = d_len;
	s_len = ft_strlen(src);
	if (n <= d_len)
		return (s_len + n);
	dest += d_len;
	while (*src && d_len++ < n - 1)
		*dest++ = *src++;
	*dest = 0;
	return (d_len2 + s_len);
}
