# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 09:50:15 by brguicho          #+#    #+#              #
#    Updated: 2023/11/16 12:18:48 by brguicho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Wextra -Werror -g
NAME = libftprintf.a
SRCS = 	ft_printf.c ft_putstrlen.c ft_putnbr_basel.c ft_putcharl.c ft_putnbrl.c ft_putunbrl.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	cp  ./libft/libft.a libftprintf.a
	ar cr $(NAME) $(OBJS)
	$(CC) $(CFLAGS) main.c -I ./libft -I . -L . -lftprintf
	make clean
	valgrind ./a.out
	
%.o: %.c $(SRCS)
	${CC} ${CFLAGS} -o $@ -c $<

clean:
	rm -rf  $(OBJS)
	make clean -C ./libft
	
fclean: clean
	rm -rf $(NAME)
	make fclean -C ./libft
	
re: fclean all


.PHONY: all clean fclean re