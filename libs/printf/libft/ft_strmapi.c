/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:36:31 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:10:54 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// char	rot(unsigned int i, char c)
//{
//	return (i + c);
//}

// void	test1(void)
//{
//	char	*str;

//	str = ft_strmapi("1234", rot);
//	printf("%s\n", str);
//	free(str);
//}

// void	test2(void)
//{
//	char	*str;

//	str = ft_strmapi("", rot);
//	printf("%s\n", str);
//	free(str);
//}

// int	main(void)
//{
//	test1();
//	test2();
//	return (0);
//}
