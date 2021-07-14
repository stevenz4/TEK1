##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	the_game.c \
		display_and_boucle.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

LIB	=	lib/my/

CC 	=	gcc

MAKE	=	make

LDFLAGS =	-l csfml-graphics -l csfml-system -l csfml-audio

CFLAGS	=	-Iinclude -Wall -Wextra

all: lib $(NAME) clean

lib: $(LIB)
	$(MAKE) -C $(LIB)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L. lib/my/libmy.a $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all lib
