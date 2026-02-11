/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbolea <lbolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 15:29:07 by lbolea            #+#    #+#             */
/*   Updated: 2025/12/13 18:19:58 by lbolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);

// UTILS
int				parse(va_list format, const char type);
int				ft_print_char(int c);
int				ft_print_str(char *str);
int				ft_print_ptr(void *ptr);
int				ft_print_num(int nb);
unsigned int	ft_print_unint(unsigned int nb);
int				ft_print_hex_up(unsigned int nb);
int				ft_print_hex_lo(unsigned int nb);

// LIBFT
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);

#endif