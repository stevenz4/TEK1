##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	main.c \
		105torus.c

OBJ	=	$(SRC:.c=.o)

NAME	=	105torus

LIB	=	lib/my

CC	=	gcc

MAKE	=	make

FCLEAN	=	fclean

TESTS_FLAGS     =       -o unit_tests -lcriterion --coverage -Iinclude/

CFLAGS	=	-Iinclude/ -lm -Wall -Wextra

all: $(NAME) clean

lib: $(LIB)
	$(MAKE) -C $(LIB)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all lib
