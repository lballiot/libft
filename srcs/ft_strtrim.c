/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 11:32:35 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/23 12:21:43 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			size++;
		i++;
	}
	if (!(str = (char *)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	i = 0;
	size = 0;
	while (s[size])
	{
		if (s[size] != ' ' && s[size] != '\n' && s[size] != '\t')
			str[i++] = s[size];
		size++;
	}
	return (str);
}
