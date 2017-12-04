/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:06:08 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/30 12:11:30 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int ac, char **av)
{
	(void)ac;
	/*	printf("STRLEN\n");
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

		char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
		char *s2 = "\x12\x02";
		char *s11 = "\0";
		char *s22 = "\200";
		printf("fct  : %d\n", ft_strcmp(s1, s2));
		printf("real : %d\n", strcmp(s1, s2));
		printf("fct  : %d\n", ft_strcmp(s11, s22));
		printf("real : %d\n", strcmp(s11, s22));

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
	static char bufc[] = "Ceci n'est pas une pipe.";
	static char bufc2[6];

	printf("fct  : %s\n", ft_strncpy(av[1], av[2], atoi(av[3])));
	printf("real : %s\n", strncpy(av[4], av[5], atoi(av[3])));
	printf("fct  : %s\n", ft_strncpy(bufc, "abcde", 3));
	printf("real : %s\n", strncpy(bufc, "abcde", 3));
	printf("fct  : %s\n", ft_strncpy(bufc2, "tititata", 5));
	printf("real : %s\n", strncpy(bufc2, "tititata", 5));
	printf("fct  : %s\n", ft_strncpy(bufc2, "toto", 2));
	printf("real : %s\n", strncpy(bufc2, "toto", 2));
	printf("fct  : %s\n", ft_strncpy(bufc, "", 1));
	printf("real : %s\n", strncpy(bufc, "", 1));
	printf("fct  : %s\n", ft_strncpy(bufc, "tata", 8));
	printf("real : %s\n", strncpy(bufc, "tata", 8));
	printf("fct  : %s\n", ft_strncpy(bufc2, "tata", 0));
	printf("real : %s\n", strncpy(bufc2, "tata", 0));
	printf("fct  : %s\n", ft_strncpy(bufc2, "abc\0\0", 5));
	printf("real : %s\n", strncpy(bufc2, "abc\0\0", 5));

	char *src = "";
	char dst1[30];
	char dst2[30];
	size_t max = 29;

	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));

	printf("real :%s\n", strncpy(dst1, src, max));
	printf("fct  :%s\n", ft_strncpy(dst2, src, max));

	char *src2 = "AAAAAAAAAA";
	char dst11[] = "BBBBBBBBBBBBBBBBBBBB";
	char dst22[] = "BBBBBBBBBBBBBBBBBBBB";
	size_t len = strlen(dst11);

	printf("real :%s\n", strncpy(dst11, src2, len));
	printf("fct  :%s\n", ft_strncpy(dst22, src2, len));

	char *src3 = "stars";
	char dst13[50];
	char dst23[50];
	size_t lenn = 50;

	memset(dst1, 'B', sizeof(dst13));
	memset(dst2, 'B', sizeof(dst23));

	printf("real :%s\n", strncpy(dst13, src3, lenn));
	printf("fct  :%s\n", ft_strncpy(dst23, src3, lenn));


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
	char bufcat[20];

	strcpy(bufcat, "1234567890123456789");
	strcpy(bufcat, "To be ");
	ft_strncat(bufcat, "or not to be", 6);
	assert(strcmp(bufcat, "To be or not") == 0);
	char bufcat2[20];

	strcpy(bufcat2, "To be ");
	ft_strncat(bufcat2, "or not to be", 6);
	ft_strncat(bufcat2, "efefef", 0);
	assert(strcmp(bufcat2, "To be or not") == 0);
	assert(bufcat2 == ft_strncat(bufcat2, "", 0));
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

	printf("\nFT_STRTRIM\n");
	printf("fct  :%s\n", ft_strtrim("\t toton\t\t  "));
	printf("fct  :%s\n", ft_strtrim("\t\t\n\t\t  "));
	printf("fct  :%s\n", ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"));
	printf("fct  :%s\n", ft_strtrim(av[1]));
	assert(strcmp(ft_strtrim("abc"), "abc") == 0);
	assert(strcmp(ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"), "AAA \t BBB") == 0);

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

	printf("\nFT_MEMMOVE\n");
	printf("fct  : %s\n", ft_memmove(av[1], av[2], atoi(av[3])));
	printf("real : %s\n", memmove(av[4], av[5], atoi(av[3])));
	char dest[] = "tototitit";
	const char src[]  = "lalalilil";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 8);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	char testA1[] = "abcdef";
	char testA2[] = "abcdef";

	ft_memmove(testA1 + 1, testA1, 5);
	ft_memmove(testA1 + 1, testA1, 0);
	memmove(testA2 +1 , testA2, 5);
	memmove(testA2 +1 , testA2, 0);
	printf("A1%s\n", testA1);
	printf("A2%s\n", testA2);

	assert(strcmp(testA1, "aabcde") == 0);
	assert(strcmp(testA1, testA2) == 0);

	char testB1[] = "abcdef";
	char testB2[] = "abcdef";

	ft_memmove(testB1, testB1 + 1, 5);
	ft_memmove(testB1, testB1 + 1, 0);
	memmove(testB2, testB2 + 1, 5);
	memmove(testB2, testB2 + 1, 0);
	printf("B1 %s\n", testB1);
	printf("B2 %s\n", testB2);
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


	printf("\nFT_ATOI\n");
	printf("fct  :%d\n", ft_atoi(" -sfecf"));
	printf("real :%d\n", atoi(" -sfecf"));
	printf("fct  :%d\n", ft_atoi(""));
	printf("real :%d\n", atoi(""));
	printf("fct  :%d\n", ft_atoi("+2798"));
	printf("real :%d\n", atoi("+2798"));
	printf("fct  :%d\n", ft_atoi("+0089"));
	printf("real :%d\n", atoi("+0089"));
	printf("fct  :%d\n", ft_atoi("a56"));
	printf("real :%d\n", atoi("a56"));
	printf("fct  :%d\n", ft_atoi("      --s8"));
	printf("real :%d\n", atoi("      --s8"));
	printf("fct  :%d\n", ft_atoi("0001020304"));
	printf("real :%d\n", atoi("0001020304"));
	printf("fct  :%d\n", ft_atoi("000000000000000110"));
	printf("real :%d\n", atoi("000000000000000110"));
	printf("fct  :%d\n", ft_atoi("-153"));
	printf("real :%d\n", atoi("-153"));
	printf("fct  :%d\n", ft_atoi("+132"));
	printf("real :%d\n", atoi("+132"));
	printf("fct  :%d\n", ft_atoi("++876"));
	printf("real :%d\n", atoi("++876"));
	printf("fct  :%d\n", ft_atoi("--132"));
	printf("real :%d\n", atoi("--132"));
	printf("fct  :%d\n", ft_atoi("dwbk "));
	printf("real :%d\n", atoi("dwbk "));
	printf("fct  :%d\n", ft_atoi(" 1"));
	printf("real :%d\n", atoi(" 1"));
	printf("fct  :%d\n", ft_atoi("42jk "));
	printf("real :%d\n", atoi("42jk "));
	printf("fct  :%d\n", ft_atoi(" 21"));
	printf("real :%d\n", atoi(" 21"));
	printf("fct  :%d\n", ft_atoi("     32 "));
	printf("real :%d\n", atoi("     32 "));
	printf("fct  :%d\n", ft_atoi("\n          42 24"));
	printf("real :%d\n", atoi("\n          42 24"));
	printf("fct  :%d\n", ft_atoi("1-2"));
	printf("real :%d\n", atoi("1-2"));
	printf("fct  :%d\n", ft_atoi("4+2"));
	printf("real :%d\n", atoi("4+2"));
	printf("fct  :%d\n", ft_atoi("  +442"));
	printf("real :%d\n", atoi("  +442"));
	printf("fct  :%d\n", ft_atoi("  -4232"));
	printf("real :%d\n", atoi("  -4232"));
	printf("fct  :%d\n", ft_atoi("4,5"));
	printf("real :%d\n", atoi("4,5"));
	printf("fct  :%d\n", ft_atoi("+"));
	printf("real :%d\n", atoi("+"));
	printf("fct  :%d\n", ft_atoi("-"));
	printf("real :%d\n", atoi("-"));
	printf("fct  :%d\n", ft_atoi("-+1"));
	printf("real :%d\n", atoi("-+1"));
	printf("fct  :%d\n", ft_atoi("++1"));
	printf("real :%d\n", atoi("-+1"));
	printf("fct  :%d\n", ft_atoi("\200123"));
	printf("real :%d\n", atoi("\200123"));
	printf("fct  :%d\n", ft_atoi("123\200"));
	printf("real :%d\n", atoi("123\200"));
	printf("fct  :%d\n", ft_atoi("  \t\n  \r\r\v\f-899"));
	printf("real :%d\n", atoi("  \t\n  \r\r\v\f-899"));
	printf("fct  :%d\n", ft_atoi("-2147483648"));
	printf("real :%d\n", atoi("-2147483648"));
	printf("fct  :%d\n", ft_atoi("2147483647"));
	printf("real :%d\n", atoi("2147483647"));


	assert(ft_atoi(" -sfecf") == atoi(" -sfecf"));
	assert(ft_atoi("") == atoi(""));
	assert(ft_atoi("+2798") == atoi("+2798"));
	assert(ft_atoi("+0089") == atoi("+0089"));
	assert(ft_atoi("a56") == atoi("a56"));
	assert(ft_atoi("    --s8") == atoi("    --s8"));
	assert(ft_atoi("0001020304") == atoi("0001020304"));
	assert(ft_atoi("000000000000000110") == atoi("000000000000000110"));
	assert(ft_atoi("-153") == atoi("-153"));
	assert(ft_atoi("+132") == atoi("+132"));
	assert(ft_atoi("++876") == atoi("++876"));
	assert(ft_atoi("--132") == atoi("--132"));
	assert(ft_atoi("dwbk ") == atoi("dwbk "));
	assert(ft_atoi(" 1") == atoi(" 1"));
	assert(ft_atoi("42jk ") == atoi("42jk "));
	assert(ft_atoi(" 21") == atoi(" 21"));
	assert(ft_atoi("     32 ") == atoi("     32 "));
	assert(ft_atoi("\n          42 24") == atoi("\n          42 24"));
	assert(ft_atoi("1-2") == atoi("1-2"));
	assert(ft_atoi("4+2") == atoi("4+2"));
	assert(ft_atoi("  +442") == atoi("  +442"));
	assert(ft_atoi("  -4232") == atoi("  -4232"));
	assert(ft_atoi("4,5") == atoi("4,5"));
	assert(ft_atoi("+") == atoi("+"));
	assert(ft_atoi("-") == atoi("-"));
	assert(ft_atoi("-+1") == atoi("-+1"));
	assert(ft_atoi("+-1") == atoi("+-1"));
	assert(ft_atoi("\200123") == atoi("\200123"));
	assert(ft_atoi("123\200") == atoi("123\200"));
	assert(ft_atoi("  \t\n  \r\r\v\f-899     ") == atoi("  \t\n  \r\r\v\f-899     "));
	assert(ft_atoi("                    -2147483648") == atoi("                    -2147483648"));
	assert(ft_atoi("     2147483647") == atoi("     2147483647"));
	*/
		/*
		   printf("\nFT_ITOA\n");
		   printf("fct  :%s\n", ft_itoa(atoi(av[1])));
		   assert(strcmp(ft_itoa(0), "0") == 0);
		   assert(strcmp(ft_itoa(-1234), "-1234") == 0);
		   assert(strcmp(ft_itoa(123456000), "123456000") == 0);
		   assert(strcmp(ft_itoa(-2147483648), "-2147483648") == 0);

*/
		printf("\nFT_MEMCCPY\n");
	/*		char buf1[] = "Ceci est un test.";
			char buf2[200];
			void *p1, *p2;

			p1 = memccpy(buf2, buf1, 'i', 10);
			p2 = ft_memccpy(buf2, buf1, 'i', 10);
			assert(p1 == p2);
			assert(ft_memccpy(buf2, buf1, 'k', 5) == 0);
			assert(ft_memccpy(buf2, buf1, 0, 0) == memccpy(buf2, buf1, 0, 0));
			assert(ft_memccpy(buf2, buf1, 0, sizeof(buf1)) == memccpy(buf2, buf1, 0, sizeof(buf1)));
			assert(ft_memccpy(buf2, buf1, 'C', 10) == buf2 + 1);
			printf("fct  :%s\n", ft_memccpy(av[1], av[2], 'y', 6));
			printf("real :%s\n", memccpy(buf1, av[2], '0', 10));
			printf("real :%s\n", memccpy(av[3], av[4], 'y', 6));*/

	printf("\nFT_STRNEW\n");
	size_t	size = 514;
	int j = 0;
	char	*ret = ft_strnew(size);

			printf("%s\n", ret);




































	return (0);
}
