#include "../includes/libft.h"

int		ft_counter(char const *s, int i, char ch)
{
	int	compteur;
	
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
