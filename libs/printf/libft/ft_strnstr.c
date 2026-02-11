/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:09:24 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 17:01:09 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <bsd/string.h>
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0 && !big)
		return (NULL);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

// void	test1(void)
//{
//	const char	*s1 = "Foo Bar Baz";
//	const char	*s2 = "Bar";
//	int			buff;

//	buff = 8;
//	printf("NORMAL ");
//	if (!(strcmp(ft_strnstr(s1, s2, buff), strnstr(s1, s2, buff))))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test2(void)
//{
//	const char	*s1 = "Foo Bar Baz";
//	const char	*s2 = "";
//	int			buff;

//	buff = 8;
//	printf("LITTLE EMPTY ");
//	if (!(strcmp(ft_strnstr(s1, s2, buff), strnstr(s1, s2, buff))))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test3(void)
//{
//	const char	*s1 = "";
//	const char	*s2 = "Bar";
//	int			buff;

//	buff = 8;
//	printf("BIG EMPTY ");
//	if (ft_strnstr(s1, s2, buff) == strnstr(s1, s2, buff))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test4(void)
//{
//	const char	*s1 = "";
//	const char	*s2 = "";
//	int			buff;

//	buff = 8;
//	printf("LITTLE & BIG EMPTY ");
//	if (!(strcmp(ft_strnstr(s1, s2, buff), strnstr(s1, s2, buff))))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test5(void)
//{
//	const char	*s1 = "";
//	const char	*s2 = "";
//	int			buff;

//	buff = 0;
//	printf("LITTLE & BIG EMPTY & BUFF ");
//	if (!(strcmp(ft_strnstr(s1, s2, buff), strnstr(s1, s2, buff))))
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
//	return (0);
//}
