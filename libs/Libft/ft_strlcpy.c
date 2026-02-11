/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:23:29 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:10:37 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <bsd/string.h>
//#include <stddef.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (siz == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < siz - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// int	main(int argc, char *argv[])
//{
//	(void)argc;
//	printf("Input : %s - %s - %d\n", argv[1], argv[2], *argv[3]);
//	printf("Mine : %zu\n", ft_strlcpy(argv[1], argv[2], *argv[3]));
//	printf("Real : %zu\n", strlcpy(argv[1], argv[2], *argv[3]));
//	return (0);
//}