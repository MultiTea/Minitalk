/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:23:55 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/21 16:05:04 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	real_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	real_len = s_len - start;
	if (real_len > len)
		real_len = len;
	str = malloc((real_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < real_len)
	{
		str[i] = *(char *)&s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// void	test1(void)
//{
//	char	*str;

//	str = "I dont feel so good...\0";
//	printf("%s\n", ft_substr(str, 5, 6));
//}

// void	test2(void)
//{
//	char	*str;

//	str = "";
//	printf("%s\n", ft_substr(str, 5, 6));
//}

// void	test3(void)
//{
//	char	*str;

//	str = "";
//	printf("%s\n", ft_substr(str, 0, 0));
//}

// void	test4(void)
//{
//	char	*str;

//	str = "I dont feel so good...\0";
//	printf("%s\n", ft_substr(str, 0, 30));
//}

// void	test5(void)
//{
//	char	*str;

//	str = "";
//	printf("%s\n", ft_substr(str, 0, 0));
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
