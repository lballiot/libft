/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:02:48 by lballiot          #+#    #+#             */
/*   Updated: 2017/12/11 11:07:08 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrev(char *str)
{
	int strrev[8];
	int i;

	i = 0;
	while (*str)
	{
		*strrev = str[i];
		str[i]++;
	}
	*str = *strrev;
	return (str);
}
