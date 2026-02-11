/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:19:26 by lbolea            #+#    #+#             */
/*   Updated: 2025/11/20 15:05:30 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <ctype.h>
//#include <stdio.h>

int	ft_isalnum(int c)
{
	return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
				&& c <= '9')));
}

// int	main(int argc, char *argv[])
//{
//	int i;

//	i = 1;
//	while ((i != argc))
//	{
//		printf("Input : %c\n", *argv[i]);
//		printf("Mine : %d\n", ft_isalnum(*argv[i]));
//		printf("Real : %d\n\n", isalnum(*argv[i]));
//		i++;
//	}
//	return (0);
//}