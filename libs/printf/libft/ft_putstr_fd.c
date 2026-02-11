/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:44:13 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:08:52 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;
	unsigned int	s_len;

	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// void	test1(void)
//{
//	int		i;
//	char	*str;

//	i = 0;
//	str = "J'aime les chocolatines.\0";
//	ft_putstr_fd(str, 1);
//}

// int	main(void)
//{
//	test1();
//	return (0);
//}
