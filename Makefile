# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 09:50:15 by brguicho          #+#    #+#              #
#    Updated: 2023/12/08 13:16:09 by brguicho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Wextra -Werror -g
NAME = libftprintf.a
SRCS = 	ft_printf.c ft_putstrlen.c ft_putnbr_basel.c ft_putcharl.c ft_putnbrl.c ft_putunbrl.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar cr $(NAME) $(OBJS)
	
%.o: %.c $(SRCS)
	${CC} ${CFLAGS} -o $@ -c $<

clean:
	rm -rf  $(OBJS)
	
fclean: clean
	rm -rf $(NAME)
	
re: fclean all


.PHONY: all clean fclean re