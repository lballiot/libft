/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:55:33 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/14 15:38:02 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

unsigned long	ft_strlen(const char *str);

char	*ft_strdup(const char *src);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strncmp(const char *s1, const char *s2, unsigned int n);

char	*ft_strstr(char *src, char *str);

char	*ft_strnstr(char *str, char *to_find, int n);

char	*ft_strcpy(char *dest, const char *src);

char	*ft_strrchar(char *str, int c);

char	*ft_strcat(char *dest, const char *src);

void	ft_strclr(char *s);

void	ft_putchar(char c);

void ft_putstr(char const *s);









#endif
