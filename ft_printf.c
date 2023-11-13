/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:12:28 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/10 12:00:53 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_header.h"

int	ft_printf(const char *format, ...)
{
	va_list	ptr;

	va_start(ptr, format);
	if (format[1] == 'c')
		ft_putchar_fd(va_arg(ptr, int), 1);
	va_end(ptr);
	return (1);
}
