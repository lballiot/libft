#include "../includes/libft.h"

int		ft_long_int(int n)
{
	int			ret;
	
	ret = 1;
	if (n < 0)
	{
		ret++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		ret++;
	}
	return (ret);
}
