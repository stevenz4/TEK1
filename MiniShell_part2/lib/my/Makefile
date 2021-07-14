##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make a lib
##

SRC	=	my_getnbr.c \
		my_putchar.c \
		my_put_nbr.c \
		my_putstr.c \
		my_revstr.c \
		my_strcat.c \
		my_strcpy.c \
		my_strcmp.c \
		my_strlen.c \
		my_strncat.c \
		my_strncpy.c \
		my_swap.c \
		my_printf.c \
		my_put_octal.c \
		my_put_binary.c \
		my_put_octalbis.c \
		my_putstr_octal.c \
		my_put_hex.c \
		my_put_hexbis.c \
		my_put_hexadd.c \

OBJ 	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: $(NAME) clean

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONI: re clean fclean all
