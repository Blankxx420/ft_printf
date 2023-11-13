/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_basel.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:01:33 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/13 14:24:47 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_header.h"

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

long long int ft_putnbr_basel(int nbr, char *base)
{
	long long int	basesize;
	long long int	nbr2;
	long long int 	len;

	basesize = ft_strlen(base);
	len = 0;
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
			len++;
			nbr = nbr * -1 ;
		}
		if (nbr >= basesize - 1)
		{
			nbr2 = nbr % basesize;
			ft_putnbr_basel(nbr / basesize, base);
			write(1, &base[nbr2], 1);
			len++;
		}
		else
		{
			write(1, &base[nbr], 1);
			len++;
		}
	}
	return (len);
}