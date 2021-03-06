/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:12:26 by lballiot          #+#    #+#             */
/*   Updated: 2017/12/11 13:58:06 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	i = 0;
	if (s1 && s2)
	{
		if ((s1[i] == '\0' && s2[i] == '\0') || n == 0)
			return (1);
		while (s1[i] == s2[i] && n-- > 0)
		{
			if ((s1[i] == '\0' && s2[i] == '\0') || n == 1)
				return (1);
			i++;
		}
	}
	return (0);
}
