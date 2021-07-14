##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile for libmy.a
##

SRC	= 	my_putchar.c		\
		my_putstr.c			\
		my_atoi.c			\
		my_strlen.c			\
		my_strdup.c			\
		my_strcpy.c			\
		my_revstr.c			\
		my_put_nbr.c		\
		my_strcmp.c			\
		my_itoa.c			\
		my_strcat.c


OBJ	=	$(SRC:.c=.o)

INC_DIR	=	../../include

CFLAGS	+=	-I$(INC_DIR)

RM	=	rm -f

CP	=	cp -r

NAME	=	libmy.a

all: $(NAME)

$(NAME): MY_LIB
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

MY_LIB: $(OBJ)

clean:
	$(RM) $(OBJ) *~ *#

fclean:	clean
	$(RM) ../$(NAME); $(RM) $(NAME)

re:	fclean all
