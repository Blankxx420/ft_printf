/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:12:28 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/13 14:24:05 by brguicho         ###   ########.fr       */
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
		if (format[index] == '%')
		{
			if (format[index + 1] == 'c')
			{
				ft_putchar_fd(va_arg(ptr, int), 1);
				len += 1;
			}
			if (format[index + 1] == 's')
				len += ft_putstrlen(va_arg(ptr, char *));
			if (format[index + 1] == 'i')
				len += ft_putnbr_basel(va_arg(ptr, long long int), "0123456789");
			if (format[index + 2] != '\0')
				index += 2;
			else 
				break;
		}
		ft_putchar_fd(format[index], 1);
		index++;
		len++;
	}
	va_end(ptr);
	return (len);
}
