/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:28:03 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:08:26 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// void	test1(void)
//{
//	int		i;
//	int		len;
//	char	*str;

//	i = 0;
//	str = "J'aime les chocolatines.\0";
//	len = ft_strlen(str);
//	while (i < len)
//	{
//		ft_putchar_fd(str[i], 1);
//		i++;
//	}
//}

// int	main(void)
//{
//	test1();
//	return (0);
//}
