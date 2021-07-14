##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	main.c \
		time_manage.c \
		while_is_open.c \
		event.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

LIB	=	lib/my/

CC 	=	gcc

MAKE	=	make

CFLAGS	=	-Iinclude\ -Wall -Wextra -l csfml-graphics -l csfml-system -l csfml-audio

all: lib $(NAME) clean

lib: $(LIB)
	$(MAKE) -C $(LIB)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L. lib/my/libmy.a $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all lib
