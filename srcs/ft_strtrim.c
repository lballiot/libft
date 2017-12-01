/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 11:32:35 by lballiot          #+#    #+#             */
/*   Updated: 2017/12/01 11:56:00 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	int		end;
	int		start;

	if (!s)
		return (NULL);
	str = (char *)s;
	i = ft_strlen(s) - 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i--;
	end = i;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i++;
	start = i;
	i = end - start + 1;
	if (i < 0)
		i = 0;
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (NULL);

	strncpy(str, (const char *)s + start, i);
	return (str);
}
