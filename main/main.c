/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:06:08 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/29 11:32:26 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int ac, char **av)
{
	(void)ac;
	/*		printf("STRLEN\n");
			printf("fct  : %lu\n", ft_strlen(av[1]));
			printf("real : %lu\n", strlen(av[1]));

			printf("\nSTRDUP\n");
			printf("fct  : %s\n", ft_strdup(av[1]));
			printf("real : %s\n", strdup(av[1]));

			printf("\nISALPHA\n");
			printf("fct  : %d\n", ft_isalpha(atoi(av[1])));
			printf("real : %d\n", isalpha(atoi(av[1])));

			printf("\nISDIGIT\n");
			printf("fct  : %d\n", ft_isdigit(atoi(av[1])));
			printf("real : %d\n", isdigit(atoi(av[1])));

			printf("\nISALNUM\n");
			printf("fct  : %d\n", ft_isalnum(atoi(av[1])));
			printf("real : %d\n", isalnum(atoi(av[1])));

			printf("\nISASCII\n");
			printf("fct  : %d\n", ft_isascii(atoi(av[1])));
			printf("real : %d\n", isascii(atoi(av[1])));

			printf("\nISPRINT\n");
			printf("fct  : %d\n", ft_isprint(atoi(av[1])));
			printf("real : %d\n", isprint(atoi(av[1])));

			printf("\nTOUPPER\n");
			printf("fct  : %d\n", ft_toupper(atoi(av[1])));
			printf("real : %d\n", toupper(atoi(av[1])));

			printf("\nTOLOWER\n");
			printf("fct  : %d\n", ft_tolower(atoi(av[1])));
			printf("real : %d\n", tolower(atoi(av[1])));

			printf("\nSTRCMP\n");
			printf("fct  : %d\n", ft_strcmp(av[1], av[2]));
			printf("real : %d\n", strcmp(av[1], av[2]));

			printf("\nSTRNCMP\n");
			printf("fct  : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
			printf("real : %d\n", strncmp(av[1], av[2], atoi(av[3])));

			printf("\nSTRSTR\n");
			static char buf[] = "Ceci n'est pas une pipe.";
			static char buf2[] = "ozarabozaraboze";
			printf("fct  : %s\n", ft_strstr(buf, "une"));
			printf("real : %s\n", strstr(buf, "une"));
			assert(ft_strstr(buf, "une") == strstr(buf, "une"));
			printf("fct  : %s\n", ft_strstr(buf, "C"));
			printf("real : %s\n", strstr(buf, "C"));
			printf("fct  : %s\n", ft_strstr(buf, "."));
			printf("real : %s\n", strstr(buf, "."));
			printf("fct  : %s\n", ft_strstr(buf, "aaaaa"));
			printf("real : %s\n", strstr(buf, "aaaaa"));
			printf("fct  : %s\n", ft_strstr(buf2, "ozaraboze"));
			printf("real : %s\n", strstr(buf2, "ozaraboze"));
			printf("fct  : %s\n", ft_strstr(buf, "BWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"));
			printf("real : %s\n", strstr(buf, "BWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"));
			printf("fct  : %s\n", ft_strstr("", ""));
			printf("real : %s\n", strstr("", ""));
			printf("fct  : %s\n", ft_strstr(buf, "une"));
			printf("real : %s\n", strstr(buf, "une"));
			printf("fct  : %s\n", ft_strstr("J'ai fait pipapipapou en LV2", "pipapou"));
			printf("real : %s\n", strstr("J'ai fait pipapipapou en LV2", "pipapou")); 

			printf("\nSTRCPY\n");
			char var[6], var2[6];
			printf("fct  : %s\n", ft_strcpy(var, "abcde"));
			printf("real : %s\n", strcpy(var2, "abcde"));
	printf("fct  : %s\n", ft_strcpy(var, "abc"));
	printf("real : %s\n", strcpy(var2, "abc"));
	printf("fct  : %s\n", ft_strcpy(var, ""));
	printf("real : %s\n", strcpy(var2, ""));

	printf("\nSTRNCPY\n");
	static char buf[] = "Ceci n'est pas une pipe.";
	static char buf2[6];
	printf("fct  : %s\n", ft_strncpy(av[1], av[2], 3));
	printf("real : %s\n", strncpy(av[1], av[2], 3));
	printf("fct  : %s\n", ft_strncpy(buf, "abcde", 3));
	printf("real : %s\n", strncpy(buf, "abcde", 3));
	printf("fct  : %s\n", ft_strncpy(buf2, "tititata", 5));
	printf("real : %s\n", strncpy(buf2, "tititata", 5));
	printf("fct  : %s\n", ft_strncpy(buf2, "toto", 2));
	printf("real : %s\n", strncpy(buf2, "toto", 2));
	printf("fct  : %s\n", ft_strncpy(buf, "", 1));
	printf("real : %s\n", strncpy(buf, "", 1));
	printf("fct  : %s\n", ft_strncpy(buf, "tata", 8));
	printf("real : %s\n", strncpy(buf, "tata", 8));
	printf("fct  : %s\n", ft_strncpy(buf2, "tata", 0));
	printf("real : %s\n", strncpy(buf2, "tata", 0));
	printf("fct  : %s\n", ft_strncpy(buf2, "abc\0\0", 5));
	printf("real : %s\n", strncpy(buf2, "abc\0\0", 5));

	printf("\nSTRNSTR\n");
	printf("fct  : %s\n", ft_strnstr("un deux 9", "deux", 9));
	printf("real : %s\n", strnstr("un deux 9", "deux", 9));
	printf("fct  : %s\n", ft_strnstr("un deux 9", "9", 3));
	printf("real : %s\n", strnstr("un deux 9", "9", 3));
	printf("fct  : %s\n", ft_strnstr("un deux 9", "cinq", 10));
	printf("real : %s\n", strnstr("un deux 9", "cinq", 10));
	printf("fct  : %s\n", ft_strnstr("un deux 9", "x", 5));
	printf("real : %s\n", strnstr("un deux 9", "x", 5));
	printf("fct  : %s\n", ft_strnstr("ozaraboze123", "ozaraboze", 15));
	printf("real : %s\n", strnstr("ozaraboze123", "ozaraboze", 15));

	printf("\nSTRRCHR\n");
	static char bufrchr[] = "abcdedcba";
	printf("fct  : %s\n", ft_strrchr(bufrchr, 'a'));
	printf("real : %s\n", strrchr(bufrchr, 'a'));
	printf("fct  : %s\n", ft_strrchr(bufrchr, 0));
	printf("real : %s\n", strrchr(bufrchr, 0));
	printf("fct  : %s\n", ft_strrchr(bufrchr, 'z'));
	printf("real : %s\n", strrchr(bufrchr, 'z'));
	printf("fct  : %s\n", ft_strrchr(bufrchr, 'e'));
	printf("real : %s\n", strrchr(bufrchr, 'e'));

	printf("\nSTRCAT\n");
	char cat[9];

	bzero(cat, 9);
	ft_strcat(cat, "");
	ft_strcat(cat, "Bon");
	ft_strcat(cat, "j");
	ft_strcat(cat, "our.");
	ft_strcat(cat, "");
	assert(strcmp(cat, "Bonjour.") == 0);
	assert(cat == ft_strcat(cat, ""));

	printf("fct  : %s\n", ft_strcat(cat, ""));
	printf("real : %s\n", strcat(cat, ""));
	printf("fct  : %s\n", ft_strcat("encore test", "test again"));
	printf("real : %s\n", strcat("encore test", "test again"));
	printf("fct  : %s\n", ft_strcat("less", "moreimp"));
	printf("real : %s\n", strcat("less", "moreimp"));
	printf("fct  : %s\n", ft_strcat("last", ""));
	printf("real : %s\n", strcat("last", ""));
	printf("fct  : %s\n", ft_strcat(av[1], "toto"));
	printf("real : %s\n", strcat(av[3], "toto"));

	printf("\nSTRNCAT\n");
	char buf[20];

	strcpy(buf, "1234567890123456789");
	strcpy(buf, "To be ");
	ft_strncat(buf, "or not to be", 6);
	assert(strcmp(buf, "To be or not") == 0);
	char buf2[20];

	strcpy(buf2, "To be ");
	ft_strncat(buf2, "or not to be", 6);
	ft_strncat(buf2, "efefef", 0);
	assert(strcmp(buf2, "To be or not") == 0);
	assert(buf2 == ft_strncat(buf2, "", 0));
	printf("fct  : %s\n", ft_strncat(av[1], av[2], atoi(av[3])));
	printf("real : %s\n", strncat(av[1], av[2], atoi(av[3])));

	printf("\nFT_STRCLR\n");
	ft_strclr(av[1]);

	write(1, "\nFT_PUTCHAR\n", 12);
	ft_putchar('f');

	write(1, "\nFT_PUTSTR\n", 11);
	ft_putstr(av[1]);

	write(1, "\nFT_PUTCHAR_FD\n", 15);
	ft_putchar_fd('d', 1);

	write(1, "\nFT_PUTSTR_FD\n", 14);
	ft_putstr_fd(av[1], 1);

	write(1, "\nFT_PUTENDL\n", 12);
	ft_putendl(av[1]);

	write(1, "\nFT_PUTENDL_FD\n", 15);
	ft_putendl_fd(av[1], 1);

	write(1, "\nFT_PUTNBR\n", 11);
	ft_putnbr(0);
	ft_putnbr(1);
	ft_putnbr(-1);
	ft_putnbr(12300);
	ft_putnbr(10203);
	ft_putnbr(-56);
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);

	write(1, "\nFT_PUTNBR_FC\n", 14);
	int		p[2];
	char	buf[100];

	pipe(p);
	ft_putnbr_fd(0, p[1]);
	ft_putnbr_fd(1, p[1]);
	ft_putnbr_fd(-1, p[1]);
	ft_putnbr_fd(56, p[1]);
	ft_putnbr_fd(-1230, p[1]);
	ft_putnbr_fd(10203, p[1]);
	ft_putnbr_fd(2147483647, p[1]);
	ft_putnbr_fd(-2147483648, p[1]);
	buf[read(p[0], buf, 100)] = 0;
	close(p[0]);
	close(p[1]);
	assert(strcmp(buf, "01-156-1230102032147483647-2147483648") == 0);
	ft_putnbr_fd(atoi(av[1]), atoi(av[2]));

	printf("\nFT_STREQU\n");
	printf("%d", ft_strequ(av[1], av[2]));
	assert(ft_strequ("", "") == 1);
	assert(ft_strequ("abcDEF", "abcDEF") == 1);
	assert(ft_strequ("abcDEF", "abcDEf") == 0);
	assert(ft_strequ("testtototititata", "toto") == 0);


	printf("\nFT_STRNEQU\n");
	assert(ft_strnequ("ededeqdf", "", 0) == 1);
	assert(ft_strnequ("abcde", "abdfe", 2) == 1);
	assert(ft_strnequ("abc", "abc", 100) == 1);
	assert(ft_strnequ("abcde", "abdde", 5) == 0);

	//		printf("\nFT_STRLCAT\n");
	//		printf("fct  : %d", ft_strlcat(av[1], av[2], atoi(av[3])));
	//		printf("real : %lu", strlcat(av[1], av[2], atoi(av[3])));

	printf("\nFT_BZERO\n");
	ft_bzero(av[1], 3);

	printf("\nFT_MEMSET\n");
	printf("fct  : %s\n", ft_memset(av[1], 't', 3));
	printf("real : %s\n", memset(av[2], 't', 3));
	char b1[100], b2[100];
	ft_memset(b1, 42, 100);
	memset(b2, 42, 100);
	assert(memset(b1, 99, 0) == ft_memset(b1, 99, 0));
	assert(memcmp(b1, b2, 100) == 0);
	b1[0] = 1;
	ft_memset(b1, 0, 0);
	assert(b1[0] == 1);
	assert(memcmp(memset(strdup("abcd"), 'A', 5), ft_memset(strdup("abcd"), 'A', 5), 5) == 0);
	assert(memcmp(memset(strdup("abcd"), 0, 0), ft_memset(strdup("abcd"), 0, 0), 5) == 0);

	printf("\nFT_STRCHR\n");
	static char buf[] = "Je suis un poisson.";
	assert(strchr(buf, 'p') == ft_strchr(buf, 'p'));
	assert(strchr(buf, '0') == ft_strchr(buf, '0'));
	assert(ft_strchr(buf, 'J') == buf);
	assert(ft_strchr(buf, 'z') == 0);

	printf("\nFT_STRSUB\n");
	static char *str = "Un jour je serai, le meilleur dresseur !";
	assert(ft_strsub(str, 0, (size_t)-10) == NULL);
	assert(strcmp(ft_strsub(str, 8, 8), "je serai") == 0);
	assert(strcmp(ft_strsub(str, 0, 0), "") == 0);

	printf("\nFT_STRJOIN\n");
	printf("fct  : %s\n", ft_strjoin(av[1], av[2]));
	assert(strcmp(ft_strjoin("abc", "def"), "abcdef") == 0);
	assert(strcmp(ft_strjoin("", ""), "") == 0);



MODIFIER STRTRIM GIT



	printf("\nFT_STRTRIM\n");
	printf("fct  :%s\n", ft_strtrim("\t toton\t\t  "));
	printf("fct  :%s\n", ft_strtrim("\t\t\n\t\t  "));
	printf("fct  :%s\n", ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"));
	printf("fct  :%s\n", ft_strtrim(av[1]));
//	assert(strcmp(ft_strtrim("abc"), "abc") == 0);
//	assert(strcmp(ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"), "AAA \t BBB") == 0);

	printf("\nFT_MEMALLOC\n");
	printf("fct  :%p\n", ft_memalloc(atoi(av[1])));

	printf("\nFT_STRDEL\n");
	char	*str;

	str = malloc(123);
	ft_strdel(&str);
	assert(str == NULL);

	printf("\nFT_MEMDEL\n");
	void	*mem;

	mem = malloc(0);
	ft_memdel(&mem);
	assert(mem == NULL);

	printf("\nFT_MEMCHR\n");
	printf("fct  : %s\n", ft_memchr(av[1], 'y', 5));
	printf("real : %s\n", memchr(av[1], 'y', 5));

	printf("\nFT_MEMCMP\n");
	assert(ft_memcmp("ab\0ab", "ab\0ab", 6) == 0);
	assert(ft_memcmp("ab\0ab", "ab\0ac", 6) != 0);
	assert(ft_memcmp("aaa", "aab", 4) < 0);
	assert(ft_memcmp("aab", "aac", 2) == 0);
	assert(ft_memcmp("aww", "bpp", 0) == 0);
	assert(ft_memcmp("\200", "\0", 1) > 0);
	printf("real : %d\n", memcmp(av[1], av[2], atoi(av[3])));
	printf("fct  : %d\n", ft_memcmp("aww", "bpp", 0));
	printf("real : %d\n", memcmp("aww", "bpp", 0));
	printf("fct  : %d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
	printf("real : %d\n", memcmp(av[1], av[2], atoi(av[3])));
*/
	printf("\nFT_MEMMOVE\n");
	printf("fct  : %s\n", ft_memmove(av[1], av[2], atoi(av[3])));
	printf("real : %s\n", memmove(av[1], av[2], atoi(av[3])));
	char dest[] = "tototitit";
	const char src[]  = "lalalilil";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 8);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	char testA1[] = "abcdef";
	char testA2[] = "abcdef";

	ft_memmove(testA1 + 1, testA1, 5);
	ft_memmove(testA1 + 1, testA1, 0);
	memmove(testA2 + 1, testA2, 5);
	memmove(testA2 + 1, testA2, 0);
	printf("%s\n", testA1);
	assert(strcmp(testA1, "aabcde") == 0);
	assert(strcmp(testA1, testA2) == 0);

	char testB1[] = "abcdef";
	char testB2[] = "abcdef";

	ft_memmove(testB1, testB1 + 1, 5);
	ft_memmove(testB1, testB1 + 1, 0);
	memmove(testB2, testB2 + 1, 5);
	memmove(testB2, testB2 + 1, 0);
	assert(strcmp(testB1, "bcdeff") == 0);
	assert(strcmp(testB1, testB2) == 0);


	printf("\nFT_MEMCPY\n");
	char test[] = "Je teste la fonction.";
	char test2[] = "Je teste la fonction.";
	printf("fct  : %s\n", ft_memcpy(test, "toto", atoi(av[1])));
	printf("real : %s\n", memcpy(test2, "toto", atoi(av[1])));

	char b1[100], b2[100];

	memset(b1, 33, 100);
	memset(b2, 63, 100);
	ft_memcpy(b1, b2, 100);
	assert(memcmp(b1, b2, 100) == 0);
	assert(ft_memcpy(b1, b2, 0) == b1);















		return (0);
}
