/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:06:19 by lbolea            #+#    #+#             */
/*   Updated: 2025/12/15 15:11:52 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(int nb)
{
	int	len;

	len = 0;
	if (!nb)
		return (1);
	if (nb < 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

int	ft_print_num(int nb)
{
	int	len;

	len = num_len(nb);
	ft_putnbr_fd(nb, 1);
	return (len);
}
