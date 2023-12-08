/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:46:16 by brguicho          #+#    #+#             */
/*   Updated: 2023/12/08 12:57:37 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbrl(int n)
{
	if (n == 0)
	{
		return (ft_putcharl(n));
	}
	if (n == -2147483648)
	{
		return (ft_putstrlen("-2147483648"));
	}
	if (n < 0)
	{
		ft_putcharl('-');
		n = n * -1 ;
	}
	if (n >= 10)
	{
		ft_putnbrl(n / 10);
		ft_putnbrl(n % 10);
	}
	else
	{
		n = n + 48;
		ft_putcharl(n);
	}
	return (ft_nbrlen(n));
}
