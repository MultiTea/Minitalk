/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:21:36 by lbolea            #+#    #+#             */
/*   Updated: 2026/02/11 17:08:25 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	main(__pid_t svr_pid, char **msg)
{
	// 1. Emcrypt message
	// 2. Send message to PID
	// 3. Stop communication
	(void)svr_pid;
	(void)msg;
	printf("CLIENT");
	return (0);
}
