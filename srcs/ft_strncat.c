char	*ft_strncat(char *dest, const char *src, unsigned int n)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[i])
	i++;
	while (src[j] && n-- > 0)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
