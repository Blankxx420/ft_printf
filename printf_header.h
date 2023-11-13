/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_header.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:02:26 by brguicho          #+#    #+#             */
/*   Updated: 2023/11/13 15:08:58 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_HEADER_H
# define PRINTF_HEADER_H

# include <stdarg.h>
# include "libft/libft.h"

int				ft_printf(const char *, ...);
int				ft_putstrlen(char *str);
int	ft_putnbr_basel( long long int nbr, char *base);
#endif
