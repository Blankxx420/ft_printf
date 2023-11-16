/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_basel.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:01:33 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/15 19:48:53 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(long long int n, size_t basesize)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
	}
	while (n)
	{
		n /= basesize;
		count++;
	}
	return (count);
}

static int	ft_base_is_valid(char *base)
{
	int	index;

	index = 0;
	if (ft_strlen(base) < 3)
		return (0);
	while (base[index])
	{
		if (base[index] == '+' || base[index] == '-')
			return (0);
		if (base[index] == base[index + 1])
			return (0);
		index++;
	}
	return (1);
}

int ft_putnbr_basel(long long int nbr, char *base)
{
	size_t basesize;
	long long int	nbr2;
	int 			len;

	basesize = ft_strlen(base);
	len = ft_nbrlen(nbr, basesize);
	if (ft_base_is_valid(base) == 1)
	{
		if (nbr == -2147483648)
		{
			ft_putnbr_basel(nbr / basesize, base);
			write(1, &base[-(nbr % basesize)], 1);
		}
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = nbr * -1 ;
		}
		if (nbr >= (long long int)basesize - 1)
		{
			nbr2 = nbr % basesize;
			ft_putnbr_basel(nbr / basesize, base);
			write(1, &base[nbr2], 1);
		}
		else
			write(1, &base[nbr], 1);
	}
	return (len);
}