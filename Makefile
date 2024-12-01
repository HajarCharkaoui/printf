CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC =	ft_printf.c ft_putnbr.c ft_putstr.c ft_putnbr_base.c ft_putchar.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ) ft_printf.h
	ar rcs $(NAME) $(OBJ)

clean:
	del /Q $(OBJ)

fclean: clean
	del /Q $(NAME)

re: fclean all

.PHONY: clean 