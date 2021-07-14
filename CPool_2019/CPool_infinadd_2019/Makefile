##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC 	=	infinadd.c

OBJ	=	$(SRC:.c=.o)

NAME	=	infin_add

DIRECTORY 	=	lib/my/

all: lib $(NAME) clean

lib: $(DIRECTORY)
	 make -C $(DIRECTORY)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L. lib/my/libmy.a

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:	fclean all
