/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:44:23 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:08:12 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*result;
	size_t			i;

	result = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		result[i] = c;
		i++;
	}
	return (s);
}

// void	test_1(void)
//{
//	char	buff[10];
//	char	buff2[10];
//	void	*result1;
//	void	*result2;

//	buff[9] = '\0';
//	buff2[9] = '\0';
//	result1 = memset(buff, 2, 9);
//	result2 = ft_memset(buff2, 2, 9);
//	if (!memcmp(result1, result2, 10))
//	{
//		printf("\033[0;32m");
//		printf("OK!\n");
//		printf("\033[0m");
//	}
//	else
//	{
//		printf("NOT OK!\n");
//		printf("%p != %p", result1, result2);
//	}
//}

// void	test_2(void)
//{
//	char	buff[1];
//	char	buff2[1];
//	void	*result1;
//	void	*result2;

//	buff[0] = '1';
//	buff2[0] = '1';
//	result1 = memset(buff, 0, 1);
//	result2 = ft_memset(buff2, 0, 1);
//	if (!memcmp(result1, result2, 1))
//	{
//		printf("\033[0;32m");
//		printf("OK!\n");
//		printf("\033[0m");
//	}
//	else
//	{
//		printf("NOT OK!\n");
//		printf("%p != %p", result1, result2);
//	}
//}

// int	main(void)
//{
//	test_1();
//	test_2();

//	return (0);
//}