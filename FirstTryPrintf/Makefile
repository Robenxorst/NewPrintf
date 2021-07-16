NAME	=	libftprintf.a

CC		=	gcc

FLAGS	=	-Wall -Wextra -Werror

SRC		=	ft_decimal_putnbr_base.c ft_format_c.c ft_format_d_i.c ft_format_p.c\
			ft_format_s.c ft_format_u.c ft_format_x_X.c ft_hex_putnbr_base.c\
			ft_printf.c ft_putnbr_u.c ft_putpoint.c ft_putstr.c

OBJ		=	${SRC:.c=.o}

RM		=	rm -f

.c.o:
		${CC} ${FLAGS} -c $< -I . -o ${<:.c=.o}

${NAME}:	${OBJ}
		ar rcs ${NAME} $?

all:		${NAME}

bonus:	re

clean:
		${RM} ${OBJ} ${OBJB}

fclean:		clean
		${RM} ${NAME}

re:		fclean	all

test:	$(NAME)
	$(CC) $(FLAGS) main.c -I .

.PHONY:	all	clean	fclean	re	bonus test
