/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 10:36:28 by lballiot          #+#    #+#             */
/*   Updated: 2017/12/04 11:54:55 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	int		i;
	unsigned char	*srcc;
	unsigned char	*dest;

	srcc = (unsigned char *)src;
	dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		write(1, "toto\n", 5);
		if (srcc[i] == (unsigned char) c)
			return (dst + i + 1);
		dest[i] = srcc[i];
		i++;
	}
	return (NULL);
}
