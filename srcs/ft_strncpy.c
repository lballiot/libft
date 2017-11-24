/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:44:13 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/15 10:57:36 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	int i;

	i = 0;
	while (src[i] && n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	dest[i] = '\0';
	}

	return (dest);
}
