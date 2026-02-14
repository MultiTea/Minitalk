/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:21:36 by lbolea            #+#    #+#             */
/*   Updated: 2026/02/15 00:16:10 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

volatile sig_atomic_t	g_ack;

void	handler(int sig)
{
	if (sig == SIGUSR2)
		ft_printf("\033[0;42m ✔ \033[0;1m Message delivered! 📨📨📨\n");
	g_ack = BUSY;
}

int	send_bit(int pid, unsigned char b)
{
	int	pos;

	pos = 7;
	while (pos >= 0)
	{
		g_ack = READY;
		if ((b >> pos) & 1)
		{
			if (kill(pid, SIGUSR2) == -1)
				return ((ft_printf("\033[0);41m ✘ \033[0m \
					\033[1;41m ERROR \033[0;1m"), 0));
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
				return ((ft_printf("\033[0);41m ✘ \033[0m \
					\033[1;41m ERROR \033[0;1m"), 0));
		}
		while (g_ack == READY)
			usleep(5);
		pos--;
	}
	return (1);
}

void	send_string(int pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		send_bit(pid, str[i]);
		i++;
	}
	send_bit(pid, '\0');
}

int	error_handler(int argc, char **argv, pid_t pid)
{
	if (argc <= 1 && (!pid))
	{
		ft_printf("\033[0;41m ✘ \033[0m \033[1;41m ERROR \033[0;1m Please enter \
a server PID and a message.");
		return (1);
	}
	else if (ft_strlen(argv[1]) < 6 || kill(pid, SIGUSR1) == -1 || pid == 0)
	{
		ft_printf("\033[0;41m ✘ \033[0m \033[1;41m ERROR \033[0;1m Please enter \
a correct server PID.");
		return (1);
	}
	else if ((!argv[2] || !argv[2][0]) && kill(pid, SIGUSR1) != -1)
	{
		ft_printf("\033[0;41m ✘ \033[0m \033[1;41m ERROR \033[0;1m Please enter \
a message.");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	pid_t				srv_pid;
	struct sigaction	sa;
	int					i;

	sa.sa_handler = &handler;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	srv_pid = 0;
	if (argv[1])
		srv_pid = ft_atoi(argv[1]);
	if (error_handler(argc, argv, srv_pid) == 1)
		exit(EXIT_FAILURE);
	i = 2;
	while (i < argc)
	{
		send_string(srv_pid, argv[i]);
		i++;
	}
	exit(EXIT_SUCCESS);
}
