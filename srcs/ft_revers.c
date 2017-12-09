/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 17:25:21 by lballiot          #+#    #+#             */
/*   Updated: 2017/12/09 17:25:34 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_revers(char *str)
{
	int		len;
	int		i;
	char	tmp;

	len = ft_strlen(str) - 1;
	i = 0;
	if (str[i] == '-')
		i++;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}
