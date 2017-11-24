/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:17:29 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/13 18:04:20 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int i;

	if (n == 0)
		return (0);
	
	i = 0;
	while (n > 1 && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			n--;
		}
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
