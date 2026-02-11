/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 21:21:18 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/21 14:02:33 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <limits.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	unsigned int	nb;
	unsigned int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	return (nb * sign);
}

// void	test1(void)
//{
//	char	*c;

//	c = "+123456";
//	printf("%d\n", atoi(c));
//	printf("%d\n", ft_atoi(c));
//	if (atoi(c) == ft_atoi(c))
//		printf("\033[0;32mOK!\n\033[0m");
//	else
//		printf("\033[0;31mKO\n\033[0m");
//}

// void	test2(void)
//{
//	char	*c;

//	c = "+0042";
//	printf("%d\n", atoi(c));
//	printf("%d\n", ft_atoi(c));
//}

// void	test3(void)
//{
//	char	*c;

//	c = "-0042";
//	printf("%d\n", atoi(c));
//	printf("%d\n", ft_atoi(c));
//}

// void	test4(void)
//{
//	char	*c;

//	c = "2147483648";
//	printf("%d\n", atoi(c));
//	printf("%d\n", ft_atoi(c));
//}

// int	main(void)
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	return (0);
//}
