/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:11:11 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/21 11:51:58 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		atoi(char *str);

int	main(int ac, char **av)
{
	(void)ac;
	printf("fct : %d\n", ft_atoi(" -sfecf"));
	printf("real : %d\n", ft_atoi(" -sfecf"));
	printf("fct : %d\n", ft_atoi(""));
	printf("real : %d\n", ft_atoi(""));
	printf("fct : %d\n", ft_atoi("+2798"));
	printf("real : %d\n", ft_atoi("+2798"));
	printf("fct : %d\n", ft_atoi("+0089"));
	printf("real : %d\n", ft_atoi("+0089"));
	printf("fct : %d\n", ft_atoi("a56"));
	printf("real : %d\n", ft_atoi("a56"));
	printf("fct : %d\n", ft_atoi("	--s8"));
	printf("real : %d\n", ft_atoi("	--s8"));
	printf("fct : %d\n", ft_atoi("0001020304"));
	printf("real : %d\n", ft_atoi("0001020304"));
	printf("fct : %d\n", ft_atoi("000000000000000110"));
	printf("real : %d\n", ft_atoi("000000000000000110"));


/*
	mt_test_atoi(num9, "-153");
	mt_test_atoi(num10, "+132");
	mt_test_atoi(num11, "++876");
	mt_test_atoi(num12, "--132");
	mt_test_atoi(num13, "dwbk ");
	mt_test_atoi(num14, " 1");
	mt_test_atoi(num15, "42jk ");
	mt_test_atoi(num16, " 21");
	mt_test_atoi(num17, "     32 ");
	mt_test_atoi(num18, "\n          42 24");
	mt_test_atoi(num19, "1-2");
	mt_test_atoi(num20, "4+2");
	mt_test_atoi(num21, "  +442");
	mt_test_atoi(num22, "  -4232");
	mt_test_atoi(num23, "4,5");
	mt_test_atoi(num24, "+");
	mt_test_atoi(num25, "-");
	mt_test_atoi(num26, "-+1");
	mt_test_atoi(num27, "+-1");
	mt_test_atoi(num28, "\200123");
	mt_test_atoi(num29, "123\200");
	mt_test_atoi(num30, "  \t\n  \r\r\v\f-899");
	mt_test_atoi(num31, "-2147483648");
	mt_test_atoi(num32, "2147483647");
*/

	return (0);
}
