/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:27:10 by lbolea            #+#    #+#             */
/*   Updated: 2026/01/15 17:30:49 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)c == (unsigned char)s[i])
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}

// void	test1(void)
//{
//	char	str1[10] = "ABCDEFG";
//	int		schr;

//	schr = 'E';
//	printf("	NORMAL\n");
//	printf("R:%s\n", strchr(str1, schr));
//	printf("M:%s\n", ft_strchr(str1, schr));
//	if (!(strcmp(ft_strchr(str1, schr), strchr(str1, schr))))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test2(void)
//{
//	char	str1[10] = "ABCDEFG";
//	int		schr;

//	schr = 'L';
//	printf("	WRONG CAR\n");
//	printf("R:%s\n", strchr(str1, schr));
//	printf("M:%s\n", ft_strchr(str1, schr));
//	if (!(ft_strchr(str1, schr), strchr(str1, schr)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test3(void)
//{
//	char	str1[10] = "ABCDEFG";
//	int		schr;

//	schr = '\0';
//	printf("	STRING NULL\n");
//	printf("R:%s\n", strchr(str1, schr));
//	printf("M:%s\n", ft_strchr(str1, schr));
//	if ((ft_strchr(str1, schr) == strchr(str1, schr)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// int	main(void)
//{
//	test1();
//	test2();
//	test3();
//	return (0);
//}
