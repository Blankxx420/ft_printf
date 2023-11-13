/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:12:28 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/13 11:28:06 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_header.h"

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		index;
	int		len;

	index = 0;
	len = 0;
	va_start(ptr, format);
	while (format[index])
	{
		if (format[index] == '%' && format[index + 1] == 'c')
		{
			ft_putchar_fd(va_arg(ptr, int), 1);
			index += 2;
			len += 1;
		}
		ft_putchar_fd(format[index], 1);
		index++;
		len++;
	}
	va_end(ptr);
	return (len);
}
