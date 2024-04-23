SRCS	=	auxiliares.c	ft_atoi.c	ft_extras.c	ft_highdoes.c	ft_highdoesextra.c	ft_numlen.c	ft_repeat.c	ft_rights.c	ft_theorder.c	highresaux.c	highresolution.c	main.c	miniresolutions.c	movpush.c	movreverse.c	movrotate.c	movswps.c	src.c	letter.c
NAME	=	push_swap
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM  = rm -f

all:		${NAME}
${NAME}:
					${CC}  ${CFLAGS} ${SRCS}
					mv a.out ${NAME}
clean:
				${RM} *.o *.gch
fclean:		clean
				${RM} ${NAME} 
re:			fclean all
.PHONY:		all	fclean	clean re
