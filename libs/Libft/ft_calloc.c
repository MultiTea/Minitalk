/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:37:16 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:05:16 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*arr;
	size_t			siz;
	unsigned int	i;

	if (nmemb != 0 && size > ((size_t)-1) / nmemb)
		return (NULL);
	siz = nmemb * size;
	arr = malloc(siz);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < siz)
	{
		*(unsigned char *)(arr + i) = 0;
		i++;
	}
	return (arr);
}

// void	test1(void)
//{
//	int	siz;
//	int	*arr1;
//	int	*arr2;
//	int	i;
//	int	j;

//	i = 0;
//	j = 0;
//	siz = 5;
//	arr1 = calloc(siz, sizeof(int));
//	arr2 = ft_calloc(siz, sizeof(int));
//	while (i < siz)
//	{
//		printf("%d", arr1[i]);
//		i++;
//	}
//	printf("\n");
//	while (j < siz)
//	{
//		printf("%d", arr1[j]);
//		j++;
//	}
//	printf("\n");
//	if (!(memcmp(arr1, arr2, siz * sizeof(int))))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	free(arr1);
//	free(arr2);
//}

// void	test2(void)
//{
//	int	*arr1;
//	int	*arr2;

//	arr1 = calloc(0, 0);
//	arr2 = ft_calloc(0, 0);
//	if ((arr1 == NULL && arr2 == NULL) || (arr1 != NULL && arr2 != NULL))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	free(arr1);
//	free(arr2);
//}

// int	main(void)
//{
//	test1();
//	test2();
//	return (0);
//}
