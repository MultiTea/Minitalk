/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:53:58 by lbolea            #+#    #+#             */
/*   Updated: 2026/01/27 00:34:21 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// void	test1(void)
//{
//	int		i;
//	char	*str;

//	i = 0;
//	str = "J'aime les chocolatines.\0";
//	ft_putendl_fd(str, 1);
//}

// int	main(void)
//{
//	test1();
//	return (0);
//}
