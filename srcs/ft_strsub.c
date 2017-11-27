/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 10:37:46 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/23 11:12:02 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	if (start > ft_strlen(s) || len > ft_strlen(s) || s == NULL)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (len-- != 0 && start != '\0')
		str[i++] = s[start++];
	return (str);
}
