/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:21:36 by lbolea            #+#    #+#             */
/*   Updated: 2026/02/12 14:15:55 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	main(int argc, char **argv)
{
	pid_t	srv_pid;
	int		str_len;
	int		i;
	int		j;
	int		pos;

	i = 2;
	srv_pid = ft_atoi(argv[1]);
	while (i < argc)
	{
		str_len = ft_strlen(argv[i]);
		j = 0;
		while (j != str_len)
		{
			pos = 7;
			while (pos > -1)
			{
				if (((argv[i][j] >> pos) & 1) == 1)
				{
					kill(srv_pid, SIGUSR2);
					usleep(25);
				}
				else
				{
					kill(srv_pid, SIGUSR1);
					usleep(25);
				}
				pos--;
			}
			j++;
		}
		pos = 7;
		if (j == str_len)
		{
			while (pos > -1)
			{
				kill(srv_pid, SIGUSR1);
				usleep(25);
				pos--;
			}
			i++;
		}
		ft_printf("END OF MESSAGE");
		kill(getpid(), SIGKILL);
	}
	return (0);
}
