##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	bistro.c \
		main.c \
		infinadd.c \
		subadd.c \
		essential.c

OBJ	=	$(SRC:.c=.o)

NAME	=	calc

LIB	=	lib/my/

CC 	=	gcc

MAKE	=	make

all: lib $(NAME) clean

lib: $(LIB)
	$(MAKE) -C $(LIB)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L. lib/my/libmy.a

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all lib
