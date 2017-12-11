/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:11:26 by lballiot          #+#    #+#             */
/*   Updated: 2017/12/11 13:58:49 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	ch;
	int		i;
	char	**tab;
	int		counter;

	if (s)
	{
		ch = (char)c;
		i = 0;
		counter = ft_counter(s, ch);
		if (!(tab = malloc(sizeof(char*) * (counter + 1))))
			return (0);
		i = 0;
		tab = ft_filling(s, -1, tab, ch);
		return (tab);
	}
	return (NULL);
}
