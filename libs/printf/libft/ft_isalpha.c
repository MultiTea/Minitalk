/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:45:53 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:05:40 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <ctype.h>
//#include <stdio.h>

int	ft_isalpha(int c)
{
	return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')));
}

// int	main(int argc, char *argv[])
//{
//	int i;

//	i = 1;
//	while ((i != argc))
//	{
//		printf("Input : %c\n", *argv[i]);
//		printf("Mine : %d\n", ft_isalpha(*argv[i]));
//		printf("Real : %d\n\n", isalpha(*argv[i]));
//		i++;
//	}
//	return (0);
//}