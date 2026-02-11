/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:22:36 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/21 17:14:43 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

static size_t	token_count(char const *s, char c)
{
	size_t	token;
	size_t	i;
	int		is_word;

	token = 0;
	i = 0;
	while (s[i])
	{
		is_word = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			if (is_word == 0)
				token++;
			is_word = 1;
			i++;
		}
	}
	return (token);
}

static void	ft_free(char **array, size_t position)
{
	size_t	i;

	i = 0;
	while (i < position)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	add_words(char **array, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			array[j] = ft_substr(s, start, (i - start));
			if (!array[j])
			{
				ft_free(array, j);
				return (0);
			}
		}
		j++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = token_count(s, c);
	array = malloc((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (!add_words(array, s, c))
		return (NULL);
	array[words] = NULL;
	return (array);
}

// void	test7(void)
//{
//	char	*text;
//	char	*str;
//	char	*c;
//	char	**token;

//	printf("--- MY FUNCTION ---\n");
//	text = "^^^1^^2a,^^^^3^^^^--h^^^^";
//	str = ft_strdup(text);
//	c = "^";
//	token = ft_split(str, '^');
//	while (*token != NULL)
//	{
//		printf("%s\n", *token);
//		token++;
//	}
//	free(str);
//	return ;
//}
// void	count_test(void)
//{
//	char	*text;
//	char	*str;
//	char	c;

//	text = ",,Je,ne,sais,,pas,comment,,,,ça,marche,,,,,le,CSV,,,,,,,,,,,.";
//	str = ft_strdup(text);
//	c = ',';
//	printf("Number of words: %zu\n", token_count(str, c));
//	free(str);
//	return ;
//}

// void	test1(void)
//{
//	char	*text;
//	char	*str;
//	char	*c;
//	char	*token;

//	text = ",,Je,ne,sais,,pas,comment,,,,ça,marche,,,,,le,CSV,,,,,,,,,,,.";
//	str = ft_strdup(text);
//	c = ",";
//	token = strtok(str, c);
//	printf("--- REAL FUNCTION ---\n");
//	while (token != NULL)
//	{
//		printf("%s\n", token);
//		token = strtok(NULL, c);
//	}
//	free(str);
//	return ;
//}

// void	test2(void)
//{
//	char	*text;
//	char	c;
//	char	**token;
//	int		i;

//	text = ",,Je,ne,sais,,pas,comment,,,,ça,marche,,,,,le,CSV,,,,,,,,,,,.";
//	c = ',';
//	token = ft_split(text, c);
//	printf("--- MY FUNCTION ---\n");
//	if (token)
//	{
//		i = 0;
//		while (token[i] != NULL)
//		{
//			printf("%s\n", token[i]);
//			i++;
//		}
//		while (i >= 0)
//		{
//			free(token[i]);
//			i--;
//		}
//		free(token);
//	}
//	return ;
//}

// void	test3(void)
//{
//	char	*text;
//	char	c;

//	text = "";
//	c = ',';
//	printf("EMPTY STRING  ");
//	printf("%c", *(char *)ft_split(text, c));
//	if (*(char *)ft_split(text, c) == 0)
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	return ;
//}

// void	test4(void)
//{
//	char	*text;
//	char	*c;

//	text = "";
//	c = "";
//	printf("ALL PARAMS EMPTY  ");
//	printf("%c", *(char *)ft_split(text, *(char *)c));
//	if (*(char *)ft_split(text, *(char *)c) == 0)
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//	return ;
//}

// void	test5(void)
//{
//	char	*text;

//	text = "^^^1^^2a,^^^^3^^^^--h^^^^";
//	printf("%s", ft_split(text, '^')[0]);
//	return ;
//}

// void	test6(void)
//{
//	char	*text;
//	char	*str;
//	char	*c;
//	char	*token;

//	text = "^^^1^^2a,^^^^3^^^^--h^^^^";
//	str = ft_strdup(text);
//	c = "^";
//	token = strtok(str, c);
//	printf("--- REAL FUNCTION ---\n");
//	while (token != NULL)
//	{
//		printf("%s\n", token);
//		token = strtok(NULL, c);
//	}
//	free(str);
//	return ;
//}

// int	main(void)
//{
//	count_test();
//	test1();
//	test2();
//	test3();
//	test4();
//	test5();
//	test6();
//	test7();
//	return (0);
//}
