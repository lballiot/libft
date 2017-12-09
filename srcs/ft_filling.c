#include "../includes/libft.h"

char	**ft_filling(char const *s, int i, char **tab, char ch)
{
	int	size;
	int	j;
	int	i_tab;
	
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
