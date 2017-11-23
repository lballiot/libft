/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:14:42 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/23 13:39:53 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] && n != 0)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
		n--;
	}
	return (0);
}
