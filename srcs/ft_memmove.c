/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 14:48:47 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/23 16:06:30 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	if (n == 0)
		return (dest);
	if (!(tmp = (char *)malloc(sizeof(char *) * (n + 1))))
		return (0);
	ft_strncpy(tmp, (const char *)src, n);
	ft_strncpy((char *)dest, tmp, n);
	free(tmp);
	return (dest);
}
