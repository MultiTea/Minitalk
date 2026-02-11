/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 15:30:12 by lbolea            #+#    #+#             */
/*   Updated: 2025/12/22 17:42:37 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	format;
	int		total;

	total = 0;
	if (!str)
		return (-1);
	va_start(format, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			str++;
			total += parse(format, *str);
		}
		else
			total += ft_print_char(*str);
		str++;
	}
	va_end(format);
	return (total);
}
