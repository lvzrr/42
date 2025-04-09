/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:33:11 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/05 21:49:07 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_inset(char c, char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

int	ft_sizearr(char *str, char *set)
{
	int	sc;

	sc = 1;
	while (*str)
		if (ft_inset(*str++, set))
			sc += 1;
	return (sc);
}

void	ft_strcpyupto(char *dest, char *src, int n)
{
	while (*src && n--)
		*dest++ = *src++;
	*dest = 0;
}

char	**ft_split(char *str, char *set)
{
	int		sc;
	int		c;
	int		c2;
	char	**strarr;
	char	*substr;

	sc = ft_sizearr(str, set);
	strarr = (char **)malloc(sc * sizeof(char *));
	c2 = 0;
	while (*str)
	{
		if (ft_inset(*str, set))
			str++;
		else
		{
			substr = str;
			c = 0;
			while (*str && !ft_inset(*str++, set))
				c++;
			strarr[c2] = malloc(c + 1);
			if (!strarr[c2])
				return (NULL);
			ft_strcpyupto(strarr[c2++], substr, c);
		}
	}
	return (strarr);
}
