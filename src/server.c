/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:25:37 by lbolea            #+#    #+#             */
/*   Updated: 2026/02/12 14:21:14 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

static unsigned char	g_bit;

void	print_bit(char g_bit)
{
	int	i;

	i = 7;
	while (i > -1)
	{
		ft_printf("%d", (g_bit >> i) & 1);
		i--;
	}
	ft_printf("\n");
}

void	handler(int signum)
{
	static int	pos = 7;

	if (signum == SIGUSR2)
		g_bit = g_bit | (1 << pos);
	pos--;
	if (pos == -1)
	{
		if (g_bit == '\0')
			g_bit = '\0';
		write(1, &g_bit, 1);
		pos = 7;
		g_bit = 0;
	}
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;

	g_bit = '\0';
	pid = getpid();
	sa.sa_handler = &handler;
	sa.sa_flags = SA_RESTART;
	(void)g_bit;
	ft_printf("PID : %d\n", pid);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (pause())
	{
	}
	return (0);
}
