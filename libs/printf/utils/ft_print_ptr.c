/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:02:53 by lbolea            #+#    #+#             */
/*   Updated: 2025/12/15 15:11:52 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ptr_len(uintptr_t ptr)
{
	size_t	count;

	count = 0;
	while (ptr != 0)
	{
		count++;
		ptr = ptr / 16;
	}
	return (count);
}

static void	convert_ptr(uintptr_t ptr)
{
	char	*base;

	base = "0123456789abcdef";
	if (ptr >= 16)
		convert_ptr(ptr / 16);
	ft_putchar_fd(base[ptr % 16], 1);
}

int	ft_print_ptr(void *ptr)
{
	uintptr_t	addr;
	int			count;

	addr = (uintptr_t)ptr;
	count = 0;
	if (!addr)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	else
	{
		count += write(1, "0x", 2);
		convert_ptr(addr);
		count += ptr_len(addr);
	}
	return (count);
}
