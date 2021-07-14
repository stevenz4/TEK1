##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	main.c \
		matrix_message.c \
		matrix_key.c \
		display_matrix.c \
		encrypted_msg_calcul.c

OBJ	=	$(SRC:.c=.o)

NAME	=	103cipher

LIB	=	lib/my/

CC 	=	gcc

MAKE	=	make

FLAGS	=	-Iinclude/ -Wall -Wextra

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
