/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:12:28 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/14 15:21:01 by brguicho         ###   ########.fr       */
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
			{
				ft_putchar_fd(va_arg(ptr, int), 1);
				len += 1;
			}
			if (format[index + 1] == 's' && va_arg(ptr,  char *) == NULL)
				len += ft_putstrlen("(null)");
			else if (format[index + 1] == 's' && (char *)va_arg(ptr, char *) != NULL)
			{
				len += ft_putstrlen(va_arg(ptr, char *));
			}
			if (format[index + 1] == 'p' && va_arg(ptr, void *) == 0)
                len += ft_putstrlen("(nil)");
			else if (format[index + 1] == 'p' && va_arg(ptr, void *) != 0)
			{
				len += ft_putstrlen("0x");
				len += ft_putnbr_basel((long long int)va_arg(ptr, int), "0123456789abcdef");
			}
			if (format[index + 1] == 'i' || format[index + 1] == 'd')
				len += ft_putnbr_basel(va_arg(ptr, long long), "0123456789");
			if (format[index + 1] == 'u')
				len += ft_putnbr_basel(va_arg(ptr, long long int), "0123456789");
			if (format[index + 1] == 'x')
				len += ft_putnbr_basel(va_arg(ptr, long long int), "0123456789abcdef");
			if (format[index + 1] == 'X')
				len += ft_putnbr_basel(va_arg(ptr, long long int), "0123456789ABCDEF");
			if (format[index + 1] == '%')
			{
				ft_putchar_fd('%', 1);
				len += 1;
			}
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
