##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles with libmy
##

SRC	=	src/main.c \
		src/game_open.c \
		src/game_open2.c \
		src/options_menu.c \
		src/options_menu2.c \
		src/initialisation.c	\
		src/initialisation_part2.c \
		src/initialisation_part3.c \
		src/initialisation_part4.c \
		src/option_map.c	\
		src/game.c	\
		src/game2.c \
		src/speed_the_skull.c	\
		src/money.c	\
		src/set_position_skull.c	\
		src/init_skull.c	\
		src/shop.c \
		src/shop2.c \
		src/shop3.c \
		src/shop4.c \
		src/shop6.c \
		src/shop7.c \
		src/shop_bis.c \
		src/life.c	\
		src/tower.c \
		src/check_life.c	\
		src/check_life_2.c	\
		src/check_lose.c	\
		src/check_lose2.c \
		src/draw_turrets.c	\
		src/my_getnbr_2.c	\
		src/rules.c		\
		src/init_rules.c	\
		src/bank_animaton.c	\
		src/tower2.c \
		src/write_lvl.c	\
		src/destroy_rules.c	\
		src/destroy_game.c	\
		src/destroy_game_2.c	\
		src/set_position_skull_2.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

LIB	=	lib/my

CC	=	gcc

MAKE	=	make

FCLEAN	=	fclean

TESTS_FLAGS     =       -o unit_tests -lcriterion --coverage -Iinclude/

CFLAGS	=	-Iinclude/ -Wall -Wextra -l csfml-graphics -l csfml-system -l csfml-audio

all: lib $(NAME) clean

lib: $(LIB)
	$(MAKE) -C $(LIB)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L. lib/my/libmy.a $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	$(MAKE) $(FCLEAN) -C $(LIB)

re: fclean all

.PHONY: re fclean clean all lib
