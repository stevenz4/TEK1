##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	main.c \
		reader.c \
		count.c \
		display_square.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

LIB	=	lib/my/

CC 	=	gcc

MAKE	=	make

CFLAGS	=	-Wall -Wextra

TESTS_FLAGS	=	-o unit_tests -lcriterion --coverage -Iinclude/

all: lib $(NAME) clean

lib: $(LIB)
	$(MAKE) -C $(LIB)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) -L. lib/my/libmy.a $(CFLAGS)

tests_run:
	$(CC) *.c lib/my/*.c $(TESTS_FLAGS) tests/*.c
	./unit_tests
	gcovr

clean:
	rm -f $(OBJ)
	rm -f *.gch
	rm -f *.gc*

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all lib tests_run
