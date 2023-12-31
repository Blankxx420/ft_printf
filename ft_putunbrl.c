/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbrl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:30:19 by brguicho          #+#    #+#             */
/*   Updated: 2023/12/08 13:08:30 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unbrlen(unsigned int n)
{
	int	count;

	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putunbrl(unsigned int n)
{
	unsigned int	nbr_len;

	nbr_len = ft_unbrlen(n);
	if (n == 0)
		return (ft_putcharl('0'));
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
	return (nbr_len);
}
