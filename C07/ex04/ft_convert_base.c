/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:22:30 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/05 20:22:33 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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

int	ft_atoi_base(char *str, char *base, int base_len)
{
	int				out;
	int				neg;

	if (base_len == -1)
		return (0);
	out = 0;
	neg = 1;
	if (!*str)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
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

int	cdigits(int n, int base_len)
{
	int				count = 1;
	unsigned int	num;

	if (n < 0)
		num = (unsigned int)(-(long)n);
	else
		num = (unsigned int)n;
	while (num >= (unsigned int)base_len)
	{
		num /= base_len;
		count++;
	}
	return (count);
}

char	*ft_itoa_base(int n, char *base, int bl)
{
	*base = n + '0';
	n = bl;
	return (base);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_from_len;
	int		base_to_len;
	int		number;
	char	*result;

	base_from_len = ft_lvalidate_base(base_from);
	base_to_len = ft_lvalidate_base(base_to);
	if (base_from_len == -1 || base_to_len == -1)
		return (NULL);
	number = ft_atoi_base(nbr, base_from, base_from_len);
	result = ft_itoa_base(number, base_to, base_to_len);
	return (result);
}

int main(void)
{
    char *result;

    result = ft_convert_base("-101", "01", "0123456789");
    if (result)
    {
        free(result);
    }
    
    return 0;
}
