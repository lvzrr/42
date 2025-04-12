/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:24:48 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/11 16:47:59 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_printunbr_fd(unsigned int n, int fd, int *len)
{
	char	o;

	if (n >= 10)
	{
		ft_printnbr_fd(n / 10, fd, len);
		ft_printnbr_fd(n % 10, fd, len);
	}
	else
	{
		o = (n % 10) + '0';
		*len = *len + 1;
		write(fd, &o, 1);
	}
}
