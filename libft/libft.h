/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 00:35:38 by jaicastr          #+#    #+#             */
/*   Updated: 2025/04/08 00:36:08 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
unsigned int	ft_strlen(const char *str);
char			*ft_strdup(const char *str);
char			*ft_strchr(const char *haystack, int needle);
char			*ft_strrchr(const char *haystack, int needle);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int n);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int n);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned int n);
char			*ft_strtrim(char *str, const char *set);
char			**ft_split(const char *str, char set);
void			ft_bzero(void *ptr, unsigned int n);
void			*ft_memset(void *s, int c, unsigned int n);
void			*ft_memcpy(void *dest, void *src, unsigned int n);
void			*ft_memmove(void *dest, void *src, unsigned int n);
void			*ft_memchr(void *ptr, int c, unsigned int n);
int				ft_memcmp(void *r1, void *r2, unsigned int n);
void			*ft_calloc(unsigned int n, unsigned int size);
int				ft_atoi(const char *str);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *str, int fd);
void			ft_putendl_fd(char *str, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *str, char (*f)(unsigned int, char));
void			ft_striteri(char *str, void (*f)(unsigned int, char *));
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_substr(const char *s, unsigned int start, size_t len);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list			*ft_lstnew(void *contents);
int				ft_lstsize(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *n);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *n);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
