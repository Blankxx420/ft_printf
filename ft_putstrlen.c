/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:40:20 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/13 11:42:29 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_header.h"

int	ft_putstrlen(char *str)
{
	int index;
	
	index = 0;
	while (str[index])
	{
		ft_putchar_fd(str[index], 1);
		index++;
	}
	return (index);
}