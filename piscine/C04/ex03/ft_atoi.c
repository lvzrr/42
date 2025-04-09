/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:31:23 by jaicastr          #+#    #+#             */
/*   Updated: 2025/02/26 18:35:51 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	neg;
	int	out;

	neg = 1;
	out = 0;
	if (!*str)
		return (0);
	while (*str < 42)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		out = out * 10 + (*str - '0');
		str++;
	}
	return (out * neg);
}
