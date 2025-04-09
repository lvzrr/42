/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:38:14 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/05 20:03:32 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_in_base(char c, char *base)
{
	int	pos;

	pos = 0;
	while (*base)
	{
		if (*base++ == c)
			return (pos);
		pos++;
	}
	return (-1);
}

int	ft_lvalidate_base(char *base)
{
	char	*ptr;
	int		l;

	l = 0;
	ptr = base;
	while (*ptr++)
		l++;
	if (l < 2)
		return (-1);
	while (*base)
	{
		ptr = base + 1;
		while (*ptr)
			if (*base == *ptr++
				|| *base == '-'
				|| *base == '+')
				return (-1);
		base++;
	}
	return (l);
}

int	ft_atoi_base(char *str, char *base)
{
	int				out;
	int				neg;
	int				base_len;

	base_len = ft_lvalidate_base(base);
	if (base_len == -1)
		return (0);
	out = 0;
	neg = 1;
	if (!*str)
		return (0);
	while (*str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v'
		|| *str == '\f' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (ft_check_in_base(*str, base) >= 0)
		out = out * base_len + ft_check_in_base(*str++, base);
	return (out * neg);
}
