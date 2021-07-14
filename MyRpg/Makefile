##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

PROGRAM	=	my_rpg

SRC	=		files/main.c		\
			files/rpg.c			\
			files/disp.c		\
			files/disp2.c		\
			files/disp3.c		\
			files/destroy.c		\
			files/mouse.c		\
			files/loop.c		\
			files/keypressed.c	\
			files/set.c			\
			files/set2.c		\
			files/set3.c		\
			files/set4.c		\
			files/set5.c		\
			files/intro.c		\
			files/intro2.c		\
			files/intro3.c		\
			files/intro4.c		\
			files/move_character_intro.c		\
			files/pseudo.c		\
			files/dialogue.c	\
			files/set_dialogue.c	\
			files/save.c		\
			files/fight/check_life.c	\
			files/fight/draw_fight_interface.c	\
			files/fight/enemy_animations.c	\
			files/fight/event_fight.c	\
			files/fight/event_fight2.c	\
			files/fight/hero_animations.c	\
			files/inv/display_inventory.c		\
			files/inv/events.c				\
			files/inv/set_sprites.c			\
			files/inv/display_weapon.c		\
			files/inv/clock_inv.c				\
			files/inv/set_sprites_2.c			\
			files/inv/display_weapon_tc.c		\
			files/inv/select_weapon.c			\
			files/inv/set_variables.c			\
			files/inv/event_selec_weap.c		\
			files/inv/destroy_inventory.c

OBJ	=		$(SRC:.c=.o)

INC_DIR	=	include/

CFLAGS 	=	-I$(INC_DIR)

CC	=		gcc -W -Wall -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lcsfml-network

RM	=		rm -rf

all: $(OBJ)
	$(MAKE) -C lib/my
	$(CC) -o $(PROGRAM) $(OBJ) lib/libmy.a $(CFLAGS);
	make mr_clean

mr_clean:
	$(RM) *.o *~ *# *.gc* *.a; cd tests; $(RM) *.o *~ *# *.gc* *.a;
	cd files; $(RM) *.o *~ *# *.gc* *.a; cd ../include; $(RM) *.o *~ *# *.gc* *.a;
	cd lib; $(RM) *.o *~ *# *.gc* *.a; cd my; $(RM) *.o *~ *# *.gc* *.a;
	$(RM) $(OBJ); $(RM) $(TEST_OBJ);

clean:	mr_clean
	$(RM) $(OBJ); $(RM) $(TEST_OBJ); $(MAKE) clean -C lib/my;

fclean: clean
	$(RM) $(PROGRAM); $(RM) $(TEST); $(MAKE) fclean -C lib/my;
	clear

re:     fclean all
