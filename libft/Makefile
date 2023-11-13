CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJ = $(SRCS:.c=.o)
SRCS =	./ft_bzero.c \
		./ft_isalnum.c \
		./ft_isalpha.c \
		./ft_isascii.c \
		./ft_isdigit.c \
		./ft_isprint.c \
		./ft_memcpy.c \
		./ft_memset.c \
		./ft_strchr.c \
		./ft_strlcpy.c \
		./ft_strlen.c \
		./ft_strrchr.c \
		./ft_tolower.c \
		./ft_toupper.c \
		./ft_strncmp.c \
		./ft_memchr.c \
		./ft_memcmp.c \
		./ft_strdup.c \
		./ft_calloc.c \
		./ft_memmove.c \
		./ft_strlcat.c \
		./ft_atoi.c \
		./ft_strnstr.c \
		./ft_substr.c \
		./ft_strjoin.c \
		./ft_strtrim.c \
		./ft_putchar_fd.c \
		./ft_putstr_fd.c \
		./ft_putendl_fd.c \
		./ft_putnbr_fd.c \
		./ft_strmapi.c \
		./ft_split.c \
		./ft_itoa.c \
		./ft_striteri.c \

SRCS_BONUS = ./ft_lstnew.c \
		./ft_lstadd_front.c \
		./ft_lstsize.c \
		./ft_lstlast.c \
		./ft_lstadd_back.c \
		./ft_lstdelone.c \
		./ft_lstclear.c \
		./ft_lstiter.c \
		./ft_lstmap.c

OBJ_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar cr $(NAME) $(OBJ)
bonus: $(OBJ_BONUS)
	ar cr $(NAME) $(OBJ_BONUS)

%.o: %.c $(SRCS) $(SRCS_BONUS)
	${CC} ${CFLAGS} -o $@ -c $<

clean:
	rm -rf  $(OBJ) $(OBJ_BONUS)
	
fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re