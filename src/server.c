/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:25:37 by lbolea            #+#    #+#             */
/*   Updated: 2026/02/12 12:17:10 by lbolea           ###   ########.fr       */
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

void	stop_prog(void)
{
	ft_printf("\n");
	print_bit(g_bit);
	ft_printf("%c\n", g_bit);
	g_bit = '\0';
	kill(getpid(), SIGSTOP);
}

void	handler(int signum)
{
	static int	pos = 7;

	ft_printf("%d", pos);
	if (signum == SIGUSR2)
		g_bit = g_bit | (1 << pos);
	pos--;
	if (pos == -1)
	{
		write(1, &g_bit, 1);
		pos = 7;
		exit(EXIT_SUCCESS);
	}
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;
	int					pos;
	unsigned char		bit_to_copy;

	g_bit = '\0';
	pid = getpid();
	sa.sa_handler = &handler;
	sa.sa_flags = SA_RESTART;
	(void)g_bit;
	ft_printf("%d\n", pid);
	scanf("%c", &bit_to_copy);
	print_bit(bit_to_copy);
	pos = 7;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (pause())
	{
	}
	return (0);
}
