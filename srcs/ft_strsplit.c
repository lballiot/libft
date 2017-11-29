/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:47:28 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/24 10:48:37 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char **tab;
	char *str;
	int i;
	int j;
	int k;

	str = (char *)s;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		while (str[i] != c)
		{
			tab[j][k] = str[i];
			i++;
			k++;
		}
		j++;
	}
	return (0);
}
