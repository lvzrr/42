/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:32:57 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/10 19:34:38 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <libft.h>

int		ft_printchar_fd(char c, int fd);
int		ft_printstr_fd(char *s, int fd);
void	ft_printnbr_fd(int n, int fd, int *c);
void	ft_printunbr_fd(unsigned int n, int fd, int *c);
void	ft_printptr_fd(unsigned long p, int *c, int fd);
int		ft_printf(const char *fmt, ...);
void	ft_printhex_fd(unsigned int x, char *set, int *l, int fd);

#endif
