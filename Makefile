CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC =	ft_printf.c ft_putnbr.c ft_putstr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ) header.h
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean 