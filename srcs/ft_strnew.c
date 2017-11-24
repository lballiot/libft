/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:06:40 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/24 11:06:50 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*str;

	i = size;
	if (size == 0)
		return (NULL);
	if (!(str = malloc((size + 1) * (sizeof(char)))))
		return (NULL);
	while (i >= 0)
		str[--i] = '\0';
	return (str);
}
