/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 18:16:52 by lbolea            #+#    #+#             */
/*   Updated: 2025/12/15 15:11:52 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse(va_list format, const char type)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_print_char(va_arg(format, int));
	else if (type == 's')
		count += ft_print_str(va_arg(format, char *));
	else if (type == 'p')
		count += ft_print_ptr(va_arg(format, void *));
	else if (type == 'd' || type == 'i')
		count += ft_print_num(va_arg(format, int));
	else if (type == 'u')
		count += ft_print_unint(va_arg(format, unsigned int));
	else if (type == 'x')
		count += ft_print_hex_lo(va_arg(format, unsigned int));
	else if (type == 'X')
		count += ft_print_hex_up(va_arg(format, unsigned int));
	else if (type == '%')
		count += ft_print_char('%');
	return (count);
}
