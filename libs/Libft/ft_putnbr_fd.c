/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:59:47 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/21 14:09:57 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <limits.h>
//#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}

// void	test1(void)
//{
//	// int	i;
//	// i = INT_MIN;
//	// ft_putnbr_fd(i, 1);
//	// ft_putchar_fd('\n', 1);
//	// i = INT_MAX;
//	// ft_putnbr_fd(i, 1);
//	// ft_putchar_fd('\n', 1);
//	// i = -42;
//	// ft_putnbr_fd(i, 1);
//	// ft_putchar_fd('\n', 1);
//	ft_putnbr_fd(5, 1);
//}

// int	main(void)
//{
//	test1();
//	return (0);
//}
