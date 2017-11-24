#include "../includes/libft.h"

char *ft_strnew(size_t size)
{
	
	int i;
	
	char *str;
	

	i = size;
	
	if (size == 0)
		return (NULL);
	
	if (!(str = malloc((size + 1) * (sizeof(char)))))
		return (NULL);
	
	while (i >= 0)
		str[--i] = '\0';
	
	return (str);
	
}
