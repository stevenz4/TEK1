##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make a lib
##

SRC	=	lib/my_putchar.c \
		lib/my_put_nbr.c \
		lib/my_putstr.c \
		lib/my_revstr.c \
		lib/my_strlen.c \
		lib/my_printf.c \
		lib/my_put_binary.c \
		lib/my_put_octal.c \
		lib/my_putstr_octal.c \
		lib/my_put_octalbis.c \
		lib/my_strcpy.c \
		lib/my_put_hex.c \
		lib/my_put_hexbis.c \
		lib/my_put_hexadd.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

TESTS_FLAGS	=	-o unit_tests -lcriterion --coverage -Iinclude/

all: $(NAME) clean

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

tests_run:
	gcc $(SRC) tests/tests_my_printf.c $(TESTS_FLAGS)
	./unit_tests
	gcovr

clean:
	rm -f $(OBJ)
	rm -f *.gch
	rm -f *.gc*

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONI: re clean fclean all tests_run
