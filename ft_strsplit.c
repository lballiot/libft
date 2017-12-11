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
	char	**tab;
	int		counter;


	if (s)
	{
		counter = ft_counter(s, c);
		if (!(tab = malloc(sizeof(char*) * (counter + 1))))
			return (0);
		tab = ft_filling(s, -1, tab, c);
		return (tab);
	}
	return (NULL);
}
