/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:12:34 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/13 18:57:50 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_header.h"
#include <stdio.h>
#include <assert.h>

int	main(void)
{;
	int	result;
	//assert(ft_printf("Ma fonction: %s\n", "abc") == printf("La fonction: %s\n", "abc"));
		//assert(ft_printf("%p Ma fonction: ", ptr) == printf("%p La fonction: ", ptr));
		//assert(ft_printf("%d Ma fonction: ", 45) == printf("%d La fonction: ", 45));
	result = ft_printf("Ma fonction: %p\n", NULL);
	printf("%u\n", result);
	result = printf("La fonction: %p\n", NULL);
	printf("%d\n", result);
		//assert(ft_printf("%u Ma fonction: ", unbr) == printf("%u La fonction: ", unbr));
		//assert(ft_printf("%x Ma fonction: ", 33) == printf("%X La fonction: ", 33));
		//assert(ft_printf("%X Ma fonction: ", 33) == printf("%u La fonction: ", 33));
		//assert(ft_printf("%% Ma fonction: ", '%') == printf("%% La fonction: ", '%'));
	
	return (0);
}
