/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:40:20 by brguicho          #+#    #+#             */
/*   Updated: 2023/12/08 13:10:02 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrlen(char *str)
{
	int	index;

	index = 0;
	if (str == NULL)
		return (ft_putstrlen("(null)"));
	while (str && str[index])
	{
		ft_putcharl(str[index]);
		index++;
	}
	return (index);
}
