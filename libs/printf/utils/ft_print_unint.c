/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:10:14 by lbolea            #+#    #+#             */
/*   Updated: 2025/12/17 18:37:31 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_print_unint(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
		len += ft_print_unint(nb / 10);
	ft_putchar_fd(nb % 10 + '0', 1);
	return (len + 1);
}
