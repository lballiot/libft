/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:40:23 by lballiot          #+#    #+#             */
/*   Updated: 2017/12/04 11:32:30 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_nbdigit(int n)
{
	int		i;

	i = 1;
	if (n < 0)
		i++;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		j;
	int		neg;

	size = ft_nbdigit(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	j = size - 1;
	if (n < 0 && n > -2147483648)
	{
		neg = 1;
		n = -n;
	}
	while (size > 0)
	{
		str[j] = n % 10 + 48;
		n = n / 10;
		size--;
		j--;
	}
	if (neg == 1)
		str[size] = '-';
	return (str);
}
