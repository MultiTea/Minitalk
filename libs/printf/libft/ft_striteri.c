/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:29:11 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/21 15:04:13 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	rot(unsigned int i, char *s)
//{
//	*s += i;
//}

// void	test1(void)
//{
//	char	s[] = "0000";

//	ft_striteri(s, rot);
//	printf("%s\n", s);
//}

// void	test2(void)
//{
//	char	s[] = "";

//	ft_striteri(s, rot);
//	printf("%s\n", s);
//}

// void	test3(void)
//{
//	char	s[] = "0000000000";

//	ft_striteri(s, rot);
//	printf("%s\n", s);
//}

// int	main(void)
//{
//	test1();
//	test2();
//	test3();
//	return (0);
//}
