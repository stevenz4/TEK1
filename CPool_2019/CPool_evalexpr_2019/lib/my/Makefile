##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make a lib
##

SRC	=	my_getnbr.c \
		my_putchar.c \
		my_put_nbr.c \
		my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: $(NAME) clean

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all
