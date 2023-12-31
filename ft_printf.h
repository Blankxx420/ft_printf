/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:02:26 by brguicho          #+#    #+#             */
/*   Updated: 2023/12/08 13:13:29 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putstrlen(char *str);
int	ft_putnbr_basel(unsigned long int nbr, char *base);
int	ft_putcharl(char c);
int	ft_putnbrl(int n);
int	ft_putunbrl(unsigned int n);
int	ft_strlen(char *str);

#endif
