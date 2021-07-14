##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	translation.c \
		scaling.c \
		rotation.c \
		reflection.c \
		calcul_pos.c \
		architect.c

OBJ	=	$(SRC:.c=.o)

NAME	=	102architect

LIB	=	lib/my/

CC 	=	gcc

MAKE	=	make

FLAGS	=	-Wall -Wextra -Iinclude -lm

all: $(NAME) clean

lib: $(LIB)
	$(MAKE) -C $(LIB)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all lib
