/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:04:27 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/21 14:18:09 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i)) && i < n
		- 1)
		i++;
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}

// void	test1(void)
//{
//	char	*str1;
//	char	*str2;
//	size_t	count;

//	str1 = "Mais si je suis très net !\0";
//	str2 = "Mais si je suis très flou !\0";
//	count = 20;
//	if (memcmp(str1, str2, count) == ft_memcmp(str1, str2, count))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test2(void)
//{
//	char	*str1;
//	char	*str2;
//	size_t	count;

//	str1 = "Mais si je suis très net !\0";
//	str2 = "Mais si je suis très flou !\0";
//	count = 26;
//	if (memcmp(str1, str2, count) != ft_memcmp(str1, str2, count))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test3(void)
//{
//	char	*str1;
//	char	*str2;
//	size_t	count;

//	str1 = "\0";
//	str2 = "\0";
//	count = 5;
//	if (memcmp(str1, str2, count) == ft_memcmp(str1, str2, count))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test4(void)
//{
//	char	*str1;
//	char	*str2;
//	size_t	count;

//	str1 = "";
//	str2 = "";
//	count = 5;
//	if (memcmp(str1, str2, count) == ft_memcmp(str1, str2, count))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test5(void)
//{
//	char	*str1;
//	char	*str2;
//	size_t	count;

//	str1 = "Test";
//	str2 = "\0";
//	count = 5;
//	if (memcmp(str1, str2, count) == ft_memcmp(str1, str2, count))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test6(void)
//{
//	char	*str1;
//	char	*str2;
//	size_t	count;

//	str1 = "Test";
//	str2 = "";
//	count = -1;
//	if (memcmp(str1, str2, count) == ft_memcmp(str1, str2, count))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// int	main(void)
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	test5();
//	test6();
//	return (0);
//}