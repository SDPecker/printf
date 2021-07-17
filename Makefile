NAME = libftprintf.a
SOURCES = convertors.c extra_maths.c putchar_putstr.c conv_to_upper.c count_digits.c ft_printf.c print_value.c
OBJ = $(SOURCES:.c=.o)
INCLUDES = ft_printf.h

all: $(NAME)

$(NAME):
	gcc -I $(INCLUDES) -Wall -Wextra -Werror -c $(SOURCES)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all