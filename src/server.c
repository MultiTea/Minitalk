/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:25:37 by lbolea            #+#    #+#             */
/*   Updated: 2026/02/11 19:37:46 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

static unsigned char	g_bit;
static int				g_bit_pos;

// void	handler_bit(int signum)
//{
//	if (signum == SIGUSR1)
//		ft_printf("0");
//	else if (signum == SIGUSR2)
//		ft_printf("1");
//}

void	handler(int signum)
{
	if (g_bit_pos <= -1)
	{
		ft_printf("%c", g_bit);
		g_bit_pos = 7;
		exit(EXIT_SUCCESS);
	}
	if (signum == SIGUSR1 && g_bit_pos)
	{
		g_bit = (g_bit >> g_bit_pos) | 0;
		g_bit_pos--;
	}
	{
		g_bit = (g_bit >> g_bit_pos) | 1;
		g_bit_pos--;
	}
}

int	main(void)
{
	(void)g_bit;
	g_bit_pos = 0;
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	ft_printf("%d\n", getpid());
	while (pause())
	{
	}
	return (0);
}
