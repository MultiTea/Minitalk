/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 02:22:24 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:11:54 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <ctype.h>
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// void	test1(void)
//{
//	int	c;
//	int	result1;
//	int	result2;

//	c = 'A';
//	result1 = ft_tolower(c);
//	printf("%c", result1);
//	result2 = tolower(c);
//	printf("%c", result2);
//}

// int	main(void)
//{
//	test1();
//	return (0);
//}