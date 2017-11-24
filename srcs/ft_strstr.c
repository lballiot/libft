/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:16:19 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/24 12:19:49 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j = i;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] && to_find[j])
	{
		if (str[i] != to_find[j])
			i++;
		if (str[i] == to_find[j])
			k = i;
		while (str[i] == to_find[j] && str[i++] != '\0' && to_find[j++] != '\0')
			if (to_find[j] == '\0')
				return (&str[k]);
		j = 0;
	}
	return (0);
}
