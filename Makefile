##
## Makefile
## File description:
## oh bordel
##

SRC	=	main.c 	\
		my_putchar.c 	\
		linked.c 		\
		util.c 			\
		my_put_nbr_str.c \

NAME	= push_swap

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

