/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:02:48 by lballiot          #+#    #+#             */
/*   Updated: 2018/01/17 14:47:08 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*strrev;
	int		i;
	int		t;

	t = 0;
	i = ft_strlen(str) - 1;
	strrev = ft_strnew(ft_strlen(str));
	while (str[i])
		strrev[t++] = str[i--];
	return (strrev);
}
