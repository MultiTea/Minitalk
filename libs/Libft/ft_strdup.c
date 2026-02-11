/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:15:54 by lbolea            #+#    #+#             */
/*   Updated: 2026/01/15 17:31:15 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

char	*ft_strdup(const char *s)
{
	size_t			len;
	unsigned char	*str;
	size_t			i;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return ((char *)str);
}

// void	test1(void)
//{
//	char	*str1;
//	char	*str2;
//	char	*str3;
//	char	*str4;

//	str1 = "Je suis une nouille.";
//	str2 = "Je suis un gnome.";
//	str3 = strdup(str1);
//	str4 = ft_strdup(str2);
//	if (!(strcmp(str1, str3) && strcmp(str2, str4)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	free(str3);
//	free(str4);
//}

// void	test2(void)
//{
//	char	*str1;
//	char	*str2;
//	char	*str3;
//	char	*str4;

//	str1 = "";
//	str2 = "";
//	str3 = strdup(str1);
//	str4 = ft_strdup(str2);
//	if (!(strcmp(str1, str3) && strcmp(str2, str4)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	free(str3);
//	free(str4);
//}

// int	main(void)
//{
//	test1();
//	test2();
//	return (0);
//}
