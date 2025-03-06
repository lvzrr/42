/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:23:14 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/05 20:25:03 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nb, char *base)
{
	char				out;
	char				*l;
	unsigned int		i;
	unsigned int		n;	

	i = 0;
	l = base;
	while (*l++)
		i++;
	l = base;
	if (!ft_check_valid_base(base, i))
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	n = (unsigned int) nb;
	if (n >= i)
		ft_putnbr_base(nb / i, base);
	out = base[nb % i];
	write(1, &out, 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
}
