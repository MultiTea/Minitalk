/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:50:31 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:06:08 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <ctype.h>
//#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(int argc, char *argv[])
//{
// int i;
//
// i = 1;
// while ((i != argc))
//{
// printf("Input : %c\n", *argv[i]);
// printf("Mine : %d\n", ft_isascii(*argv[i]));
// printf("Real : %d\n\n", isascii(*argv[i]));
// i++;
//}
// return (0);
//}