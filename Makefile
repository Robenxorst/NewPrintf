NAME = libftprintf.a

SRC =  ft_printf.c ft_addition_f.c ft_chapter1.c ft_chapter2.c

all: ${NAME}

${NAME}: ${SRC}
	gcc -Wall -Werror -Wextra -c $^
	ar -rc libftprintf.a *.o

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
