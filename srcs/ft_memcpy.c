/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:10:03 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/23 18:01:04 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (n == 0 || dest == NULL || src == NULL)
		return (dest);
	while (n != 0)
	{
		*d++ = *s++;
		n--;
	}
	*d = '\0';
	//	ft_strncpy((char *)dest, (const char *)src, n);
	return (dest);
}
