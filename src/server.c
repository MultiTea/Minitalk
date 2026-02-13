/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:25:37 by lbolea            #+#    #+#             */
/*   Updated: 2026/02/13 23:41:43 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	handler(int sig, siginfo_t *info, void *ucontext)
{
	static int				pos = 7;
	static unsigned char	g_bit = 0;

	(void)ucontext;
	(void)info;
	if (sig == SIGUSR2)
		g_bit |= (1 << pos);
	pos--;
	if (pos < 0)
	{
		write(1, &g_bit, 1);
		if (g_bit == '\0')
			write(1, "\n", 1);
		g_bit = 0;
		pos = 7;
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("PID : %d\n", getpid());
	sa.sa_sigaction = &handler;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
