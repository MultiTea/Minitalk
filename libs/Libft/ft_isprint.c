/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:58:22 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 17:16:29 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <ctype.h>
//#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(int argc, char *argv[])
//{
//	int i;

//	i = 1;
//	while ((i != argc))
//	{
//		printf("Input : %c\n", *argv[i]);
//		printf("Mine : %d\n", ft_isprint(*argv[i]));
//		printf("Real : %d\n\n", isprint(*argv[i]));
//		i++;
//	}
//	return (0);
//}