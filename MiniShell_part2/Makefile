##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	main.c \
		loop.c \
		command.c \
		environ_cmd.c \
		environ_cmdbis.c \
		unsetenv_cmd.c \
		check_command.c \
		cd_cmd.c \
		command_bis.c \
		exec_cmd.c \
		execbis_cmd.c \
		error.c

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

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
	$(CC) -o $(NAME) $(OBJ) -L. lib/my/libmy.a $(CFLAGS) -g3

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	$(MAKE) $(FCLEAN) -C $(LIB)

re: fclean all

.PHONY: re fclean clean all lib
