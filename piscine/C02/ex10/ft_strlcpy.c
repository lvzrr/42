/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:29:03 by jaicastr          #+#    #+#             */
/*   Updated: 2025/02/25 11:29:14 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	const char		*start;
	unsigned int	len;

	len = 0;
	start = src;
	while (*src++)
		len++;
	if (size == 0)
		return (len);
	while (*start && --size)
		*dst++ = *start++;
	*dst = '\0';
	return (len);
}
