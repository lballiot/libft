/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:04:38 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/21 11:56:41 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int isneg;
	int nb;
	int j = ft_strlen(str);
	
	i = 0;
	nb = 0;
	isneg = 0;

	
	while (((str[i] >= 8) && str[i] <= 13) || str[i] == ' ')
		i++;
	while (((str[j] >= 8) && str[j] <= 13) || str[j] == ' ')
		j--;
	printf("%d\n",j-i);
	str += i;
	
	if (ft_strlen(str - i) - (ft_strlen(str) - j)> 13)
		return (0);
	if (str[i] == '-')
		isneg = 1;
	if ((str[i] == '+') || str[i] == '-')
		i++;

	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (isneg == 1)
		return (-nb);
	else
		return (nb);
}
