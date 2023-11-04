DIRSRC		= ./srcs/

DIRINC		= ./includes/

DIROBJ		= ./objs/

DIRLIB		= ./libft/

SRC			= ft_printf idu_file p_file s_file x_file

SRCS		= $(addprefix ${DIRSRC}, $(addsuffix .c, ${SRC}))

HEAD		= ./includes/

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

NAMELFT		= libft.a

CC			= gcc
RM			= rm -f
AR			= ar rc
RN			= ranlib

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c -I${DIRINC} -I${DIRLIB} $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			cd ${DIRLIB} && ${MAKE} && cp -v ${NAMELFT} ../${NAME}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

main:		$(NAME)
			${CC} -I ${DIRINC} -I ${DIRLIB} ${NAME} main.c

all:		$(NAME)

clean:
			${RM} ${OBJS}
			cd ${DIRLIB} && ${MAKE} clean

fclean:		clean
			${RM} $(NAME)
			cd ${DIRLIB} && ${MAKE} fclean

re:			fclean all

.PHONY:		all clean fclean re
