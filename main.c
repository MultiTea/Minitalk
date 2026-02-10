/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:31:15 by lbolea            #+#    #+#             */
/*   Updated: 2026/02/10 20:29:39 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>
#include <unistd.h>

void	handler(int signum)
{
	printf("OFF");
}

int	main(int argc, char **argv)
{
	__pid_t	server;

	server = argv[1];
	if (argc < 2)
		return (0);
	if (signal(SIGINT, handler))
		return (0);
	printf("ON");
}
