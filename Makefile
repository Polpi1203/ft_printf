NAME = libftprintf.a

SRCS = ft_printf.c\
			ft_flag_d.c\

OBJS	=	${SRCS:.c=.o}

CFLAGS	=	-Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS) 
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all