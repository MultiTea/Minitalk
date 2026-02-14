/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:25:37 by lbolea            #+#    #+#             */
/*   Updated: 2026/02/15 00:22:47 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	write_car(int sig, int *pos, unsigned char *g_bit, pid_t c_pid)
{
	if (sig == SIGUSR2)
		*g_bit |= (1 << *pos);
	(*pos)--;
	if (*pos < 0)
	{
		write(1, g_bit, 1);
		if (*g_bit == '\0')
		{
			write(1, "\n", 1);
			kill(c_pid, SIGUSR2);
		}
		*g_bit = 0;
		*pos = 7;
	}
}

void	handler(int sig, siginfo_t *info, void *ucontext)
{
	static int				pos = 7;
	static unsigned char	g_bit = 0;
	static pid_t			c_pid;

	(void)ucontext;
	if (info->si_pid != c_pid && c_pid != '\0')
	{
		g_bit = 0;
		pos = 7;
	}
	c_pid = info->si_pid;
	write_car(sig, &pos, &g_bit, c_pid);
	kill(c_pid, SIGUSR1);
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("\033[0;41m ✘ \033[0m \033[1;41m ERROR \033[0;1m \
Use \"./server\" only.");
		exit(EXIT_FAILURE);
	}
	ft_printf("PID 🠊 \033[0;1m%d\033[0m\n\033[0;42m ✔ \033[1m Listening... 👂\033[0m\n",
		getpid());
	sa.sa_sigaction = &handler;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (EXIT_SUCCESS);
}
