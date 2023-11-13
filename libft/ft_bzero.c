/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:58:50 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/09 13:53:08 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < size)
	{
		*((unsigned char *) dest + index) = '\0';
		index++;
	}
}
