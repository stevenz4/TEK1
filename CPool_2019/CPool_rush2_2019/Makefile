##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=       my_putchar.c \
		my_put_nbr.c \
	        my_strlen.c \

OBJ 	=	$(SRC:.c=.o)

NAME	= 	rush2_3

all:	build clean

build:	$(OBJ)
	ar rc libmy.a $(OBJ)
	gcc -o $(NAME) $(RUSH2) -L. libmy.a

clean:	$(OBJ)
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
