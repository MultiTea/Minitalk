/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:07:10 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:05:00 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stddef.h>
//#include <stdio.h>
//#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*result;
	size_t	i;

	result = s;
	i = 0;
	while (i < n)
	{
		result[i] = '\0';
		i++;
	}
}

// void	test1(void)
//{
//	char	str1[25] = "I don't feel so good...";
//	char	str2[25] = "I don't feel so good...";

//	str1[24] = '\0';
//	str2[24] = '\0';
//	bzero(str1, 2);
//	ft_bzero(str2, 2);
//	if (!(memcmp(str1, str2, 25)))
//	{
//		printf("\033[0;32m");
//		printf("OK!\n");
//		printf("\033[0m");
//	}
//	else
//	{
//		printf("NOT OK!\n");
//	}
//}

// void	test2(void)
//{
//	char	str1[25] = "I don't feel so good...";
//	char	str2[25] = "I don't feel so good...";

//	str1[24] = '\0';
//	str2[24] = '\0';
//	bzero(str1, 29);
//	ft_bzero(str2, 29);
//	if (!(memcmp(str1, str2, 25)))
//	{
//		printf("\033[0;32m");
//		printf("OK!\n");
//		printf("\033[0m");
//	}
//	else
//	{
//		printf("NOT OK!\n");
//	}
//}

// int	main(void)
//{
//	test1();
//	test2();
//	return (0);
//}
