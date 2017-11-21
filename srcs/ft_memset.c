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

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

void	*ft_memset(void *s, int c, unsigned int n)
{
	printf("avant memset : %s\n", s);
	while (n > 0)
	{
		ft_strcpy();
	}
printf("apres memset : %s\n", s);

}
