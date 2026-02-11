/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:26:40 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:07:56 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dest;
	s = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	if (d > s && d < s + n)
		while (n--)
			d[n] = s[n];
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}

// void	test1(void)
//{
//	char	str1[10] = "ABCDEFG";
//	char	str2[10] = "ABCDEFGHI";
//	char	str3[10] = "ABCDEFG";
//	char	str4[10] = "ABCDEFGHI";
//	int		buff;

//	buff = 9;
//	printf("	2 DIFFERENTS STRINGS ");
//	ft_memmove(str1, str2, buff);
//	memmove(str3, str4, buff);
//	if (!(strcmp(str1, str3)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test2(void)
//{
//	char	str1[20] = "ABCDEFGHIJ";
//	char	str2[20] = "ABCDEFGHIJ";
//	int		buff;

//	buff = 5;
//	printf("	SAME STRING OVERLAP ");
//	ft_memmove(str1 + buff, str1, buff);
//	memmove(str2 + buff, str2, buff);
//	if (!(memcmp(str1, str2, 20)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test3(void)
//{
//	char	str1[20] = "ABCDEFGHIJ";
//	char	str2[20] = "ABCDEFGHIJ";
//	int		buff;

//	buff = 5;
//	printf("	STRING OVERLAP ");
//	ft_memmove(str1 + buff, str1, 10);
//	memmove(str2 + buff, str2, 10);
//	printf("\n%s\n", str1);
//	printf("%s\n", str2);
//	if (!(memcmp(str1, str2, 20)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}
//#include <stdlib.h>

// void	test4(void)
//{
//	char	dst1[0xF0];
//	char	dst2[0xF0];
//	char	*data;
//	int		size;

//	data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
//	size = 0xF0 - 0xF;
//	memset(dst1, 'A', sizeof(dst1));
//	memset(dst2, 'A', sizeof(dst2));
//	memcpy(dst1, data, strlen(data));
//	memcpy(dst2, data, strlen(data));
//	memmove(dst1, dst1 + 3, size);
//	ft_memmove(dst2, dst2 + 3, size);
//	if (!memcmp(dst1, dst2, size))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test5(void)
//{
//	char	dest[10] = "ABCDEFGHI\0";
//	char	dest2[10] = "ABCDEFGHI\0";
//	char	src[5] = "toto\0";
//	char	src2[5] = "toto\0";

//	printf("	test 5 STRING OVERLAP \n");
//	printf("source 1: %s\n", src);
//	printf("source 2: %s\n", src2);
//	printf("dest   1: %s\n", dest);
//	printf("dest   2: %s\n", dest2);
//	ft_memmove(dest, src, 5);
//	memmove(dest2, src2, 5);
//	printf("%s\n", src);
//	printf("%s\n", src2);
//	printf("%s\n", dest);
//	printf("%s\n", dest2);
//	if (!(memcmp(src, src2, 5)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	if (!(memcmp(dest, dest2, 9)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test6(void)
//{
//	char	dest[10] = "ABCDEFGHI\0";
//	char	dest2[10] = "ABCDEFGHI\0";

//	printf("	test 5 STRING OVERLAP \n");
//	printf("dest   1: %s\n", dest);
//	printf("dest   2: %s\n", dest2);
//	ft_memmove(dest + 1, dest, 8);
//	memmove(dest2 + 1, dest2, 8);
//	printf("%s\n", dest);
//	printf("%s\n", dest2);
//	if (!(memcmp(dest, dest2, 9)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test7(void)
//{
//	char	dest[10] = "ABCDEFGHI\0";
//	char	dest2[10] = "ABCDEFGHI\0";

//	printf("	test 5 STRING OVERLAP \n");
//	printf("dest   1: %s\n", dest);
//	printf("dest   2: %s\n", dest2);
//	ft_memmove(dest, dest + 1, 8);
//	memmove(dest2, dest2 + 1, 8);
//	printf("%s\n", dest);
//	printf("%s\n", dest2);
//	if (!(memcmp(dest, dest2, 9)))
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
//	test7();
//}
