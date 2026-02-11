/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:57:35 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:12:06 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <ctype.h>
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// void	test1(void)
//{
//	int	c;
//	int	result1;
//	int	result2;

//	c = 'a';
//	result1 = ft_toupper(c);
//	printf("%c", result1);
//	result2 = toupper(c);
//	printf("%c", result2);
//}

// int	main(void)
//{
//	test1();
//	return (0);
//}
