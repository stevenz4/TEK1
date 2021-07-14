##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	main.c \
		reader.c \
		display.c \
		move_player.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

LIB	=	lib/my

CC	=	gcc

MAKE	=	make

FCLEAN	=	fclean

TESTS_FLAGS     =       -o unit_tests -lcriterion --coverage -Iinclude/

FLAGS	=	-lncurses -Wall -Wextra

all: lib $(NAME) clean

lib: $(LIB)
	$(MAKE) -C $(LIB)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L. lib/my/libmy.a $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	$(MAKE) $(FCLEAN) -C $(LIB)

re: fclean all

.PHONY: re fclean clean all lib
