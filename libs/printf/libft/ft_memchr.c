/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:04:31 by lbolea            #+#    #+#             */
/*   Updated: 2026/01/23 16:22:35 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// void	test1(void)
//{
//	char	*str;
//	int		fnd;
//	size_t	count;

//	str = "Mais si je suis très net !\0";
//	fnd = 't';
//	count = 25;
//	printf("%s\n", (char *)memchr(str, fnd, count));
//	printf("%s\n", (char *)ft_memchr(str, fnd, count));
//	if (memchr(str, fnd, count) == ft_memchr(str, fnd, count))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test2(void)
//{
//	char	*str;
//	int		fnd;
//	size_t	count;

//	str = "Mais si je suis très net !\0";
//	fnd = 't';
//	count = 0;
//	printf("%s\n", (char *)memchr(str, fnd, count));
//	printf("%s\n", (char *)ft_memchr(str, fnd, count));
//	if (memchr(str, fnd, count) == ft_memchr(str, fnd, count))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test3(void)
//{
//	char	*str;
//	int		fnd;
//	size_t	count;

//	str = "Mais si je suis très net !\0";
//	fnd = '\0';
//	count = 20;
//	printf("R:%s\n", (char *)memchr(str, fnd, count));
//	printf("M:%s\n", (char *)ft_memchr(str, fnd, count));
//	if (memchr(str - 2, fnd, count) == ft_memchr(str - 2, fnd, count))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test4(void)
//{
//	char	*str;
//	int		fnd;
//	size_t	count;

//	str = "Mais si je suis très net !\0";
//	fnd = '\0';
//	count = -5;
//	printf("R:%s\n", (char *)memchr(str, fnd, count));
//	printf("M:%s\n", (char *)ft_memchr(str, fnd, count));
//	if (memchr(str, fnd, count) == ft_memchr(str, fnd, count))
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
//	return (0);
//}
