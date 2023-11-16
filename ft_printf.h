/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:02:26 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/16 12:18:41 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_putstrlen(char *str);
int	ft_putnbr_basel(unsigned long int nbr, char *base);
int ft_putcharl(char c);
int ft_putnbrl(int n);
int ft_putunbrl(unsigned int n);
#endif
