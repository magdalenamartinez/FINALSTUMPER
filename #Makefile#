##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/rush3.c	\
		src/whilefunction.c	\

NAME	= 	rush3

LIB	=	-L lib/my/ -lmy

BACK	= 	../../

INCLUDE	=	-I ./include/

CDLIB	=	lib/my/

all: $(NAME)

$(NAME):
	make -C $(CDLIB)
	gcc -o $(NAME) $(SRC) $(LIB) $(INCLUDE)

clean:
	rm -f $(NAME)

fclean:
	rm -f $(NAME)
	make -C $(CDLIB) fclean
	make -C $(CDLIB) clean

re: fclean all
