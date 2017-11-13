/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:06:08 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/13 18:42:09 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(int ac, char **av)
{
	(void)ac;
	printf("STRLEN\n");
	printf("fct : %u\n", ft_strlen(av[1]));
	printf("real : %lu\n", strlen(av[1]));

	printf("\nSTRDUP\n");
	printf("fct : %s\n", ft_strdup(av[1]));
	printf("real : %s\n", strdup(av[1]));

	printf("\nISALPHA\n");
	printf("fct : %d\n", ft_isalpha(atoi(av[1])));
	printf("real : %d\n", isalpha(atoi(av[1])));

	printf("\nISDIGIT\n");
	printf("fct : %d\n", ft_isdigit(atoi(av[1])));
	printf("real : %d\n", isdigit(atoi(av[1])));

	printf("\nISALNUM\n");
	printf("fct : %d\n", ft_isalnum(atoi(av[1])));
	printf("real : %d\n", isalnum(atoi(av[1])));

	printf("\nISASCII\n");
	printf("fct : %d\n", ft_isascii(atoi(av[1])));
	printf("real : %d\n", isascii(atoi(av[1])));

	printf("\nISPRINT\n");
	printf("fct : %d\n", ft_isprint(atoi(av[1])));
	printf("real : %d\n", isprint(atoi(av[1])));

	printf("\nTOUPPER\n");
	printf("fct : %d\n", ft_toupper(atoi(av[1])));
	printf("real : %d\n", toupper(atoi(av[1])));

	printf("\nTOLOWER\n");
	printf("fct : %d\n", ft_tolower(atoi(av[1])));
	printf("real : %d\n", tolower(atoi(av[1])));

	printf("\nSTRCMP\n");
	printf("fct : %d\n", ft_strcmp(av[1], av[2]));
	printf("real : %d\n", strcmp(av[1], av[2]));

//	printf("\nSTRNCMP\n");
//	printf("fct : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
//	printf("real : %d\n", strncmp(av[1], av[2], atoi(av[3])));

	printf("\nSTRSTR\n");
	printf("fct : %s\n", ft_strstr(av[1], av[2]));
	printf("real : %s\n", strstr(av[1], av[2]));





	return (0);
}
