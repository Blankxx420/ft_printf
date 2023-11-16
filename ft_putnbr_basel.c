/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_basel.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:01:33 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/16 12:31:57 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(unsigned long int n, size_t basesize)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n /= basesize;
		count++;
	}
	return (count);
}



int ft_putnbr_basel(unsigned long int nbr, char *base)
{
	size_t basesize;
	unsigned long int	nbr2;
	int 			len;

	basesize = ft_strlen(base);
	len = ft_nbrlen(nbr, basesize);
	if (nbr >= (unsigned long int)basesize)
	{
		nbr2 = nbr % basesize;
		ft_putnbr_basel(nbr / basesize, base);
		write(1, &base[nbr2], 1);
	}
	else		
		write(1, &base[nbr], 1);

	return (len);
}