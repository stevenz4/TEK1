##
## EPITECH PROJECT, 2019
## Bistro-matic
## File description:
## Makefile for Bistro-matic
##

.PHONY = all clean fclean re
SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
NAME = 107transfer
CFLAGS = -Wall
TEST_SRCS = src/number.c	\
			src/str.c		\
			src/eval_expr.c	\
			src/my_strdup.c	\
			src/my_strlen.c
TEST_FLAGS = -lcriterion --coverage -Iinclude/ -o test

all: 		$(NAME)

$(NAME): 	$(OBJS)
			gcc -lm *.o $(CFLAGS) -o $(NAME)

clean:
			rm -rf *.o
			rm -rf *.gch
			rm -rf *.gc*

fclean:		clean
			rm -rf $(NAME)
			rm -rf test

re:			fclean all

tests_run:
			gcc $(TEST_SRCS) $(TEST_FLAGS) tests/*.c
			./test
