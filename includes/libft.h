/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:55:33 by lballiot          #+#    #+#             */
/*   Updated: 2017/12/05 22:18:11 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <assert.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

void			*ft_memset(void *s, int c, size_t n);

void			ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t n);

void			*ft_memccpy(void *dst, void *src, int c, size_t n);

void			*ft_memmove(void *dest, const void *src, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *str);

char			*ft_strdup(const char *src);

char			*ft_strcpy(char *dest, const char *src);

char			*ft_strncpy(char *dest, const char *src, unsigned int n);

char			*ft_strcat(char *dest, const char *src);

char			*ft_strncat(char *dest, const char *src, unsigned int n);

size_t			ft_strlcat(char *dst, const char *src, size_t size);

char			*ft_strchr(const char *s, int c);

char			*ft_strstr(char *src, char *str);

char			*ft_strnstr(char *str, char *to_find, int n);

char			*ft_strrchr(const char *s, int c);

int				ft_strncmp(const char *s1, const char *s2, unsigned int n);

int				ft_strcmp(const char *s1, const char *s2);

int				ft_atoi(const char *str);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

void			*ft_memalloc(size_t size);

void			ft_memdel(void **ap);

char			*ft_strnew(size_t size);

void			ft_strdel(char **as);

void			ft_strclr(char *s);

void			ft_striter(char *s, void(*f)(char *));

void			ft_striteri(char *s, void(*f)(unsigned int, char *));

char			*ft_strmap(char const *s, char (*f)(char));

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int				ft_strequ(char const *s1, char const *s2);

int				ft_strnequ(char const *s1, char const *s2, size_t n);

char			*ft_strsub(char const *s, unsigned int start, size_t len);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strtrim(char const *s);

char			**ft_strsplit(char const *s, char c);

char			*ft_itoa(int n);

void			ft_putchar(char c);

void			ft_putstr(char const *s);

void			ft_putendl(char const *s);

void			ft_putnbr(int n);

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char const *s, int fd);

void			ft_putendl_fd(char const *s, int fd);

void			ft_putnbr_fd(int n, int fd);

#endif
