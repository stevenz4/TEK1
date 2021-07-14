##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	main.c \
		map.c \
		print_map.c \
		signal_handler.c \
		player_signal_2.c \
		player_signal_1.c \
		modif_map.c \
		player1_loop.c \
		player2_loop.c \
		encrypt_decrypt.c

OBJ	=	$(SRC:.c=.o)

NAME	=	navy

LIB	=	lib/my

CC	=	gcc

MAKE	=	make

FCLEAN	=	fclean

TESTS_FLAGS     =       -o unit_tests -lcriterion --coverage -Iinclude/

CFLAGS	=	-Iinclude/ -Wall -Wextra

all: lib $(NAME) clean

lib: $(LIB)
	$(MAKE) -C $(LIB)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L. lib/my/libmy.a $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	$(MAKE) $(FCLEAN) -C $(LIB)

re: fclean all

.PHONY: re fclean clean all lib
