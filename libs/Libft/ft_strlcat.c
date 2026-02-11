/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:32:34 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/21 14:09:03 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <bsd/string.h>
//#include <signal.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(src);
	i = 0;
	if (siz == 0)
		return (s_len);
	d_len = ft_strlen(dst);
	if (d_len >= siz)
		return (siz + s_len);
	while (src[i] != '\0' && siz > (d_len + i + 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len + i < siz)
		dst[d_len + i] = '\0';
	while (src[i] != '\0')
		i++;
	return (d_len + s_len);
}

// void	segfault_handler(int signal)
//{
//	(void)signal;
//	printf("\033[0;31m");
//	printf("SEGFAULT ");
//	printf("\033[0;32m");
//	printf("OK!\n");
//	printf("\033[0m");
//	exit(1);
//}

// int	test1(void)
//{
//	int		buff;
//	char	ok[12] = "coucou";
//	char	oks[12] = "hello";
//	char	ko[12] = "coucou";
//	char	kos[12] = "hello";
//	size_t	result1;
//	size_t	result2;

//	buff = 12o [12] = "coucou";
//	ko[11] = '\0';
//	printf("\n--- SAME STRING ---\n");
//	signal(SIGSEGV, segfault_handler);
//	ft_strlcat(ko, ko, 29);
//	return (0);
//}

// int	test3(void)
//{
//	char	ok[12] = "coucou";

//	ok[11] = '\0';
//	printf("\n--- TEST 3 ---\nOG:\n%s\n", ok);
//	signal(SIGSEGV, segfault_handler);
//	printf("%zu\n", strlcat(ok, ok, 29));
//	return (0);
//}

// void	test4(void)
//{
// char	*dest;
//
// dest = (char *)malloc(sizeof(*dest) * 15);
// memset(dest, 0, 15);
// memset(dest, 'r', 6);
// dest[10] = 'a';
// printf("%zu", ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
// write(1, "\n", 1);
// write(1, dest, 15);
//}
//
// int	main(void)
//{
// test1();
// test2();
// test3();
// test4();
// return (0);
//}
