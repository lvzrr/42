/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:55:17 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/11 10:57:45 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printstr_fd(char *str, int fd)
{
	unsigned int	l;

	if (!str)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	l = 0;
	while (str[l])
		write (fd, str + l++, 1);
	return (l);
}
