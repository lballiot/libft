int		ft_strnequ(char const *s1, char const *s2, unsigned int n)
{
	int i;

	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && n > 0)
	{
		if(n == 1 && s1[i] == s2[i])
			return (1);
		i++;
		n--;
	}
	return (0);
}
