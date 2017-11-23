/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:51:12 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/21 11:03:23 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcpy(char *dest, const char *src);

void	*ft_memset(void *s, int c, unsigned int n)
{
	int i;

	i = 0;
	printf("avant memset : %p\n", s);
	while (n > 0)
	{
		s[i++] = c;
		n--;



//		ft_strcpy((char)c, (char)s[n]);
	}
printf("apres memset : %p\n", s);
	return (s);
}
