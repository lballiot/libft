/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:22:49 by lballiot          #+#    #+#             */
/*   Updated: 2017/12/14 12:44:01 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	if (*to_find == '\0')
		return ((char *)str);
	while (*str && n)
	{
		if (ft_memcmp(str, to_find, ft_strlen(to_find)) == 0
				&& n >= ft_strlen(to_find))
			return ((char *)str);
		str++;
		n--;
	}
	return (NULL);
}
