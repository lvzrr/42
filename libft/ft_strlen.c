/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:56:23 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/07 15:57:14 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_strlen(const char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}
