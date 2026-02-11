/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:25:51 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/21 14:34:23 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = dest;
	s = (unsigned char *)src;
	while (i < n && (d || s))
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// void	test1(void)
//{
//	int		buffer;
//	char	str1[25] = "I don't feel ";
//	char	str2[25] = "so good...";
//	char	str3[25] = "I don't feel ";
//	char	str4[25] = "so good...";

//	str1[24] = '\0';
//	str2[24] = '\0';
//	str3[24] = '\0';
//	str4[24] = '\0';
//	buffer = 9;
//	memcpy(str1, str2, buffer);
//	ft_memcpy(str3, str4, buffer);
//	if (!(memcmp(str2, str4, 25)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// int	main(void)
//{
//	test1();
//	return (0);
//}
