##
## EPITECH PROJECT, 2019
## Bistro-matic
## File description:
## Makefile for Bistro-matic
##

.PHONY = all clean fclean re
SRCS := $(wildcard src/*.c)
OBJS := $(SRCS:.c=.o)
NAME = 101pong
CFLAGS = -Wall -Wextra
TEST_SRCS = 		src/pong.c\
			src/my_getnbr.c\

TEST_FLAGS = -lcriterion --coverage -Iinclude/ -lm -o test

all: 		$(NAME)

%.o:		%.c
			gcc -c $< -o $@ -Iinclude/ $(CFLAGS) -lm

$(NAME): 	$(OBJS)
			gcc -lm src/*.o $(CFLAGS) -o $(NAME)

clean:
			rm -rf src/*.o
			rm -rf src/*.gch
			rm -rf *.gc*

fclean:		clean
			rm -rf $(NAME)
			rm -rf test

re:			fclean all
