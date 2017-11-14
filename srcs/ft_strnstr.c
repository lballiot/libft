/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:22:49 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/14 11:42:18 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	j = i;
	if (*to_find == '\0')
		return (str);
	while (str[i] && to_find[j] && n >= 1)
	{
		if (str[i] != to_find[j] && n >= 1)
		{
			n--;
			i++;
		}
		if (str[i] == to_find[j])
			k = i;
		while (str[i] == to_find[j] && str[i++] != '\0' && to_find[j++] != '\0'
				&& n-- >= 1)
			if (to_find[j] == '\0')
				return (&str[k]);
		j = 0;
	}
	return (0);
}
