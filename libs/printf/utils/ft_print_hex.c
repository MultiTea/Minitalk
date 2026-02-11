/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:18:38 by lbolea            #+#    #+#             */
/*   Updated: 2025/12/15 15:11:52 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_up(unsigned int nb)
{
	char	*base;
	int		count;

	base = "0123456789ABCDEF";
	count = 0;
	if (nb >= 16)
		count += ft_print_hex_up(nb / 16);
	ft_putchar_fd(base[nb % 16], 1);
	return (count + 1);
}

int	ft_print_hex_lo(unsigned int nb)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
		count += ft_print_hex_lo(nb / 16);
	ft_putchar_fd(base[nb % 16], 1);
	return (count + 1);
}
