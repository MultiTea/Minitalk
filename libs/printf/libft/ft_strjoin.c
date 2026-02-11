/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:45:07 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:10:17 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	s1_len;
	unsigned int	s2_len;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < (s1_len))
	{
		str[i] = *(char *)&s1[i];
		i++;
	}
	while (i + j < (s1_len + s2_len))
	{
		str[i + j] = *(char *)&s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

// void	test1(void)
//{
//	char	*s1;
//	char	*s2;
//	char	*s3;
//	char	*str;

//	s1 = "Merci la gueuze !\0";
//	s2 = " Tu es un laidron, mais tu es bien bonne.\0";
//	s3 = "Merci la gueuze ! Tu es un laidron, mais tu es bien bonne.\0";
//	str = ft_strjoin(s1, s2);
//	// printf("%s\n", s3);
//	// printf("%s\n", str);
//	if (!(strcmp(str, s3)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	free(str);
//	return ;
//}

// void	test2(void)
//{
//	char	*s1;
//	char	*s2;
//	char	*s3;
//	char	*str;

//	s1 = "Merci la gueuze !\0";
//	s2 = "";
//	s3 = "Merci la gueuze !\0";
//	str = ft_strjoin(s1, s2);
//	// printf("%s\n", s3);
//	// printf("%s\n", str);
//	if (!(strcmp(str, s3)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	free(str);
//	return ;
//}

// void	test3(void)
//{
//	char	*s1;
//	char	*s2;
//	char	*s3;
//	char	*str;

//	s1 = "";
//	s2 = "";
//	s3 = "";
//	str = ft_strjoin(s1, s2);
//	// printf("%s\n", s3);
//	// printf("%s\n", str);
//	if (!(strcmp(str, s3)))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	free(str);
//	return ;
//}

// int	main(void)
//{
//	test1();
//	test2();
//	test3();
//	return (0);
//}
