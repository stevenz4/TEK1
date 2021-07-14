##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	eval_expr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

LIB	=	lib/my/

MAKE	=	make

all: lib $(NAME) clean

lib: $(LIB)
	$(MAKE) -C $(LIB)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -L. lib/my/libmy.a

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all lib
