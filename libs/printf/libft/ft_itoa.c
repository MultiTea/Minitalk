/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:39:02 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/21 16:06:16 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <stdlib.h>

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long			nbr;
	unsigned int	len;
	char			*str;

	nbr = n;
	len = numlen(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

// void	test1(void)
//{
//	int		nb;
//	char	*str;

//	nb = -623;
//	str = ft_itoa(nb);
//	printf("%s\n", str);
//	free(str);
//}

// void	test2(void)
//{
//	int		nb;
//	char	*str;

//	nb = 156;
//	str = ft_itoa(nb);
//	printf("%s\n", str);
//	free(str);
//}

// void	test3(void)
//{
//	long	nb;
//	char	*str;

//	nb = -0;
//	str = ft_itoa(nb);
//	printf("%s\n", str);
//	free(str);
//}

// int	main(void)
//{
//	// test1();
//	// test2();
//	test3();
//	return (0);
//}
