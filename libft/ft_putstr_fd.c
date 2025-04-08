/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:42:32 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/08 12:47:51 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	unsigned int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		write(fd, str + i, 1);
		i++;
	}
}
