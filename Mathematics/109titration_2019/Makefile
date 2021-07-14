##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	109titration.c \
		usage.c \
		display.c

OBJ	=	$(SRC:.c=.o)

NAME	=	109titration

LIB	=	lib/my

CC	=	gcc

MAKE	=	make

FCLEAN	=	fclean

TESTS_FLAGS     =       -o unit_tests -lcriterion --coverage -Iinclude/

CFLAGS	=	-Iinclude/ -Wall -Wextra

all: $(NAME) clean

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	$(MAKE) $(FCLEAN) -C $(LIB)

re: fclean all

.PHONY: re fclean clean all lib
