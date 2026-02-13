/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:21:36 by lbolea            #+#    #+#             */
/*   Updated: 2026/02/13 23:39:01 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int		g_ack;

void	handler(int sig)
{
	(void)sig;
	g_ack = 1;
}

void	send_bit(int pid, unsigned char b)
{
	int	pos;

	pos = 7;
	while (pos >= 0)
	{
		g_ack = 0;
		if ((b >> pos) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		while (g_ack == 0)
			pause();
		pos--;
	}
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

int	main(int argc, char **argv)
{
	pid_t				srv_pid;
	struct sigaction	sa;
	int					i;

	sa.sa_handler = &handler;
	sa.sa_flags = SA_RESTART;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	srv_pid = ft_atoi(argv[1]);
	i = 2;
	while (i < argc)
	{
		send_string(srv_pid, argv[i]);
		i++;
	}
	ft_printf("END OF MESSAGE\n");
	return (0);
}
