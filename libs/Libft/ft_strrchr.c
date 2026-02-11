/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:03:08 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/21 14:41:37 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	while (s_len > 0)
	{
		if ((unsigned char)c == s[s_len])
			return ((char *)&s[s_len]);
		s_len--;
	}
	if ((unsigned char)c == s[s_len])
		return ((char *)&s[s_len]);
	return (NULL);
}

// void	test1(void)
//{
//	char	str1[10] = "ABCDEFG\0";
//	int		schr;

//	schr = 'E';
//	printf("	NORMAL\n");
//	printf("R:%s\n", strrchr(str1, schr));
//	printf("M:%s\n", ft_strrchr(str1, schr));
//	if (!(strcmp(ft_strrchr(str1, schr), strrchr(str1, schr))))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test2(void)
//{
//	char	str1[10] = "ABCDEFG\0";
//	int		schr;

//	schr = 'L';
//	printf("	WRONG CAR\n");
//	printf("R:%s\n", strrchr(str1, schr));
//	printf("M:%s\n", ft_strrchr(str1, schr));
//	if (!(ft_strrchr(str1, schr), strrchr(str1, schr)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test3(void)
//{
//	char	str1[10] = "ABCDEFG\0";
//	int		schr;

//	schr = '\0';
//	printf("	STRING NULL\n");
//	printf("R:%s\n", strrchr(str1, schr));
//	printf("M:%s\n", ft_strrchr(str1, schr));
//	if ((ft_strrchr(str1, schr) == strrchr(str1, schr)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test4(void)
//{
//	char	str1[10] = "";
//	int		schr;

//	schr = 'A';
//	printf("	EMPTY STRING\n");
//	printf("R:%s\n", strrchr(str1, schr));
//	printf("M:%s\n", ft_strrchr(str1, schr));
//	if ((ft_strrchr(str1, schr) == strrchr(str1, schr)))
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