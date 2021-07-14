##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC 	=	finalstumper.c

NAME	=	rush3

DIRECTORY	=	lib/my

all:	lib $(NAME)

lib: $(DIRECTORY)
	make -C $(DIRECTORY)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -L. lib/my/libmy.a

fclean:
	rm -f $(NAME)

re:	fclean all
