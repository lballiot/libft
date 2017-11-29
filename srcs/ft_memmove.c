/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 14:48:47 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/29 11:03:53 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*dst;

	str = (char *)src;
	dst = (char *)src;
	if (n == 0)
		return (dest);
	if (str < dst)
		while (n--)
			*str++ = *dst++;
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
