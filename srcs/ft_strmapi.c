#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(str = (char *)malloc((sizeof(char)) * (ft_strlen(s) + 1))))
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
