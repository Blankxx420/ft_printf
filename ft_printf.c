/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:12:28 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/15 19:22:17 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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
				len += ft_putcharl(va_arg(ptr, int));
			if (format[index + 1] == 's' && (char *)va_arg(ptr, char *) != NULL)
				len += ft_putstrlen(va_arg(ptr, char *));
			if (format[index + 1] == 'p' && va_arg(ptr, void *) == 0)
                len += ft_putstrlen("(nil)");
			else if (format[index + 1] == 'p' && va_arg(ptr, void *) != 0)
			{
				len += ft_putstrlen("0x");
				len += ft_putnbr_basel((unsigned long long)va_arg(ptr, void *), "0123456789abcdef");
			}
			if (format[index + 1] == 'i' || format[index + 1] == 'd')
				len += ft_putnbrl(va_arg(ptr, int));
			if (format[index + 1] == 'u')
				len += ft_putunbrl(va_arg(ptr, unsigned int));
			if (format[index + 1] == 'x')
				len += ft_putnbr_basel(va_arg(ptr, long long int), "0123456789abcdef");
			if (format[index + 1] == 'X')
				len += ft_putnbr_basel(va_arg(ptr, long long int), "0123456789ABCDEF");
			if (format[index + 1] == '%')
				len += ft_putcharl('%');
			if (format[index + 2] != '\0')
				index += 2;
			else
				break;
		}
		len += ft_putcharl(format[index]);
        index++;
	}
	va_end(ptr);
	return (len);
}
