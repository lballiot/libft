/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 11:11:26 by lballiot          #+#    #+#             */
/*   Updated: 2017/12/04 11:30:55 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_compteur(char const *s, int i, char ch)
{
	int		compteur;

	if (s[i] != ch)
		compteur = 1;
	if ((s[i] == ch))
		compteur = 0;
	while (s[i])
	{
		if (s[i] == ch || i == 0)
		{
			while ((s[i] == ch && s[i]))
				i++;
			if ((s[i] != ch && s[i] != '\0'))
				compteur++;
			while ((s[i] != ch && s[i]))
				i++;
			i--;
		}
		i++;
	}
	return (compteur);
}

static char		**ft_remplissage(char const *s, int i, char **tab, char ch)
{
	int		size;
	int		j;
	int		i_tab;

	i_tab = 0;
	while (s[++i])
		if (s[i] == ch || i == 0)
		{
			size = 0;
			while ((s[i] == ch && s[i]))
				i++;
			j = i;
			while ((s[i] != ch && s[i++]))
				size++;
			if (!(tab[i_tab] = malloc(sizeof(char) * size + 1)))
				return (NULL);
			i = j;
			j = 0;
			while ((s[i] != ch && s[i]))
				tab[i_tab][j++] = s[i++];
			if ((s[--i] != ch && s[i] != '\0'))
				tab[i_tab++][j] = '\0';
		}
	tab[i_tab] = NULL;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char	ch;
	int		i;
	char	**tab;
	int		compteur;

	ch = (char)c;
	i = 0;
	compteur = ft_compteur(s, i, ch);
	if (!(tab = malloc(sizeof(char*) * (compteur + 1))))
		return (0);
	i = 0;
	tab = ft_remplissage(s, -1, tab, ch);
	return (tab);
}
