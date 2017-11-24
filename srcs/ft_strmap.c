#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
