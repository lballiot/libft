/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 10:01:49 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/23 10:23:01 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>
void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (s);
	while (n != 0)
	{
		str[i++] = (unsigned char)c;
		n--;
	}
	return (s);
}
