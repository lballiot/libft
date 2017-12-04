/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:04:40 by lballiot          #+#    #+#             */
/*   Updated: 2017/12/04 11:01:23 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{

	int i;

	i = 0;
	while (s[i] != (char)c)
	{
		i++;
	}
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (NULL);

}
