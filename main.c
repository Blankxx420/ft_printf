/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:12:34 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/10 11:55:05 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_header.h"
#include <stdio.h>
#include <assert.h>

int	main(void)
{
	void			*ptr;
	int				nbr;
	unsigned int	unbr;

	ptr = "stsufhsuhf";
	nbr = 22;
	unbr = 19461811;
	assert(ft_printf("%c", 'a') == printf("%c", 'a'));
		//assert(ft_printf("%s Ma fonction: ", "abc") == printf("%s La fonction: ", "abc"));
		//assert(ft_printf("%p Ma fonction: ", ptr) == printf("%p La fonction: ", ptr));
		//assert(ft_printf("%d Ma fonction: ", 45) == printf("%d La fonction: ", 45));
		//assert(ft_printf("%i Ma fonction: ", nbr) == printf("%i La fonction: ", nbr));
		//assert(ft_printf("%u Ma fonction: ", unbr) == printf("%u La fonction: ", unbr));
		//assert(ft_printf("%x Ma fonction: ", 33) == printf("%X La fonction: ", 33));
		//assert(ft_printf("%X Ma fonction: ", 33) == printf("%u La fonction: ", 33));
		//assert(ft_printf("%% Ma fonction: ", '%') == printf("%% La fonction: ", '%'));
	
	return (0);
}
