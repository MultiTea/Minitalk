/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:10:04 by lbolea            #+#    #+#             */
/*   Updated: 2026/01/27 15:27:58 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <ctype.h>
// #include <stdio.h>

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

// int	main(int argc, char *argv[])
// {
// 	int i;

// 	i = 1;
// 	while ((i != argc))
// 	{
// 		printf("Input : %c\n", *argv[i]);
// 		printf("Mine : %d\n", ft_isdigit(*argv[i]));
// 		printf("Real : %d\n\n", isdigit(*argv[i]));
// 		i++;
// 	}
// 	return (0);
// }