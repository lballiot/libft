/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:06:08 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/24 13:00:26 by lballiot         ###   ########.fr       */
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
			*/
	printf("\nSTRSTR\n");
//	static char buf[] = "Ceci n'est pas une pipe.";
	static char buf2[] = "ozarabozaraboze";
/*	printf("fct  : %s\n", ft_strstr(buf, "une"));
	printf("real : %s\n", strstr(buf, "une"));
	printf("fct  : %s\n", ft_strstr(buf, "C"));
	printf("real : %s\n", strstr(buf, "C"));
	printf("fct  : %s\n", ft_strstr(buf, "."));
	printf("real : %s\n", strstr(buf, "."));
	printf("fct  : %s\n", ft_strstr(buf, "aaaaa"));
	printf("real : %s\n", strstr(buf, "aaaaa")); */
	printf("!!!fct  : %s\n", ft_strstr(buf2, "ozaraboze"));
	printf("real : %s\n", strstr(buf2, "ozaraboze"));
/*	printf("fct  : %s\n", ft_strstr(buf, "BWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"));
	printf("real : %s\n", strstr(buf, "BWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"));
	printf("fct  : %s\n", ft_strstr("", ""));
	printf("real : %s\n", strstr("", ""));
	printf("fct  : %s\n", ft_strstr(buf, "une"));
	printf("real : %s\n", strstr(buf, "une")); */
	printf("!!!fct  : %s\n", ft_strstr("J'ai fait pipapipapou en LV2", "pipapou"));
	printf("real : %s\n", strstr("J'ai fait pipapipapou en LV2", "pipapou"));

/*	printf("\nSTRCPY\n");
	char var[6], var2[6];
	printf("fct  : %s\n", ft_strcpy(var, "abcde"));
	printf("real : %s\n", strcpy(var2, "abcde"));
	printf("fct  : %s\n", ft_strcpy(var, "abc"));
	printf("real : %s\n", strcpy(var2, "abc"));
	printf("fct  : %s\n", ft_strcpy(var, ""));
	printf("real : %s\n", strcpy(var2, "")); */

	printf("\nSTRNCPY\n");
/*	printf("fct  : %s\n", ft_strncpy(av[1], av[2], 3));
	printf("real : %s\n", strncpy(av[1], av[2], 3));
	printf("fct  : %s\n", ft_strncpy("dest", "srcs", 3));
	printf("real : %s\n", strncpy("dest", "srcs", 3));
	printf("fct  : %s\n", ft_strncpy("toto", "tititata", 5));
	printf("real : %s\n", strncpy("toto", "tititata", 5));
	printf("fct  : %s\n", ft_strncpy("", "toto", 2));
	printf("real : %s\n", strncpy("i", "toto", 2));
	printf("fct  : %s\n", ft_strncpy("test", "", 1));
	printf("real : %s\n", strncpy("test", "", 1));
	printf("fct  : %s\n", ft_strncpy("tototiti", "tata", 8));
	printf("real : %s\n", strncpy("tototiti", "tata", 8));
	printf("fct  : %s\n", ft_strncpy("titi", "tata", 0));
	printf("real : %s\n", strncpy("titi", "tata", 0)); */

/*	printf("\nSTRNSTR\n");
	printf("fct  : %s\n", ft_strnstr("un deux 9", "deux", 9));
	printf("real : %s\n", strnstr("un deux 9", "deux", 9));
	printf("fct  : %s\n", ft_strnstr("un deux 9", "9", 3));
	printf("real : %s\n", strnstr("un deux 9", "9", 3));
	printf("fct  : %s\n", ft_strnstr("un deux 9", "cinq", 10));
	printf("real : %s\n", strnstr("un deux 9", "cinq", 10));
	printf("fct  : %s\n", ft_strnstr("un deux 9", "x", 5));
	printf("real : %s\n", strnstr("un deux 9", "x", 5));
	printf("fct  : %s\n", ft_strnstr("ozaraboze123", "ozaraboze", 15));
	printf("real : %s\n", strnstr("ozaraboze123", "ozaraboze", 15)); */

/*	printf("\nSTRRCHR\n");
	static char bufrchr[] = "abcdedcba";
	printf("fct  : %s\n", ft_strrchr(bufrchr, 'a'));
	printf("real : %s\n", strrchr(bufrchr, 'a'));
	printf("fct  : %s\n", ft_strrchr(bufrchr, 0));
	printf("real : %s\n", strrchr(bufrchr, 0));
	printf("fct  : %s\n", ft_strrchr(bufrchr, 'z'));
	printf("real : %s\n", strrchr(bufrchr, 'z'));
	printf("fct  : %s\n", ft_strrchr(bufrchr, 'e'));
	printf("real : %s\n", strrchr(bufrchr, 'e')); */

	printf("\nSTRCAT\n");
/*	char cat[9];

	bzero(cat, 9);
	ft_strcat(cat, "");
	ft_strcat(cat, "Bon");
	ft_strcat(cat, "j");
	ft_strcat(cat, "our.");
	ft_strcat(cat, "");
	assert(strcmp(cat, "Bonjour.") == 0);
	assert(cat == ft_strcat(cat, ""));

	printf("fct  : %s\n", ft_strcat("dest", ""));
	printf("real : %s\n", strcat("dest", ""));
	printf("fct  : %s\n", ft_strcat("", "toto"));
	printf("real : %s\n", strcat("", "toto"));
	printf("fct  : %s\n", ft_strcat("Je vais", "Tu iras"));
	printf("real : %s\n", strcat("Je vais", "Tu iras"));
	printf("fct  : %s\n", ft_strcat("encore test", "test again"));
	printf("real : %s\n", strcat("encore test", "test again"));
	printf("fct  : %s\n", ft_strcat("less", "moreimp"));
	printf("real : %s\n", strcat("less", "moreimp"));
	printf("fct  : %s\n", ft_strcat("last", ""));
	printf("real : %s\n", strcat("last", ""));*/

	printf("\nSTRNCAT\n");
	printf("fct  : %s\n", ft_strncat(av[1], av[2], atoi(av[3])));
	printf("real : %s\n", strncat(av[1], av[2], atoi(av[3])));

	printf("\nFT_STRCLR\n");
	ft_strclr(av[1]);

	printf("\nFT_PUTCHAR\n");
	ft_putchar('f');

	printf("\nFT_PUTSTR\n");
	ft_putstr(av[1]);

	printf("\nFT_PUTCHAR_FD\n");
	ft_putchar_fd('d', 1);

	printf("\nFT_PUTSTR_FD\n");
	ft_putstr_fd(av[1], 1);

	printf("\nFT_PUTENDL\n");
	ft_putendl(av[1]);

	printf("\nFT_PUTENDL_FD\n");
	ft_putendl_fd(av[1], 1);

	printf("\nFT_PUTNBR\n");
	ft_putnbr(atoi(av[1]));

	printf("\nFT_PUTNBR_FD\n");
	ft_putnbr_fd(atoi(av[1]), atoi(av[2]));

	printf("\nFT_STREQU\n");
	printf("%d", ft_strequ(av[1], av[2]));

	printf("\nFT_STRNEQU\n");
	printf("%d", ft_strnequ(av[1], av[2], atoi(av[3])));

	//		printf("\nFT_STRLCAT\n");
	//		printf("fct  : %d", ft_strlcat(av[1], av[2], atoi(av[3])));
	//		printf("real : %lu", strlcat(av[1], av[2], atoi(av[3])));

	printf("\nFT_BZERO\n");
	ft_bzero(av[1], 3);

	printf("\nFT_MEMSET\n");
	printf("fct  : %s\n", ft_memset(av[1], 't', 3));
	printf("real : %s\n", memset(av[2], 't', 3));

	printf("\nFT_STRCHR\n");
	printf("fct  : %s\n", ft_strchr(av[1], atoi(av[2])));
	printf("real : %s\n", strchr(av[1], 'y'));

	printf("\nFT_STRSUB\n");
	printf("fct  : %s\n", ft_strsub(av[1], 2, 6));

	printf("\nFT_STRJOIN\n");
	printf("fct  : %s\n", ft_strjoin(av[1], av[2]));

	printf("\nFT_STRTRIM\n");
	printf("fct  :%s\n", ft_strtrim("\t\t\n\t\t  "));
	printf("fct  :%s\n", ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"));
	printf("fct  :%s\n", ft_strtrim(av[1]));

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
	printf("fct  : %d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
	printf("real : %d\n", memcmp(av[1], av[2], atoi(av[3])));
	printf("fct  : %d\n", ft_memcmp("aww", "bpp", 0));
	printf("real : %d\n", memcmp("aww", "bpp", 0));
	printf("fct  : %d\n", ft_memcmp("200", "00", 1));
	printf("real : %d\n", memcmp("200", "00", 1));

	printf("\nFT_MEMMOVE\n");
	printf("fct  : %s\n", ft_memmove(av[1], av[2], atoi(av[3])));
	printf("real : %s\n", memmove(av[1], av[2], atoi(av[3])));
	char testA1[] = "abcdef";
	char testA2[] = "abcdef";
	printf("fct  : %s\n", ft_memmove(testA1 + 1, testA1, 5));
	printf("real : %s\n", memmove(testA2 + 1, testA2, 5));
	printf("fct  : %s\n", ft_memmove(testA1 + 1, testA1, 0));
	printf("real : %s\n", memmove(testA2 + 1, testA2, 0));
	ft_memmove(testA1 + 1, testA1, 5);
	ft_memmove(testA1 + 1, testA1, 0);
	assert(strcmp(testA1, testA2) == 0);
	assert(strcmp(testA1, "aabcde") == 0);

	printf("\nFT_MEMCPY\n");
	printf("fct  : %s\n", ft_memcpy(av[1], av[2], atoi(av[3])));
	printf("real : %s\n", memcpy(av[4], av[5], atoi(av[3])));
















	return (0);
}
