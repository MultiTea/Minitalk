/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:18:56 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/21 14:58:53 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trmd;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, *(int *)&s1[start]))
		start++;
	while (ft_strchr(set, *(int *)&s1[end]))
		end--;
	trmd = ft_substr(s1, start, ((end - start) + 1));
	return (trmd);
}

// void	test1(void)
//{
//	char		*str;
//	const char	*e;

//	e = "x";
//	str = "xxx_SnIpER_du_92_xxx";
//	printf("%s", ft_strtrim(str, e));
//	if (ft_strtrim(str, e))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// int	main(void)
//{
//	test1();
//	return (0);
//}
