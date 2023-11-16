/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:40:20 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/16 10:58:32 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrlen(char *str)
{
	int index;
	
	index = 0;
	if (str == NULL)
		return (ft_putstrlen("(null)"));
	while (str && str[index])
	{
		ft_putchar_fd(str[index], 1);
		index++;
	}
	return (index);
}