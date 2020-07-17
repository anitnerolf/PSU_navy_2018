##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## Makefile
##

SRC	=	./printf/my_printf.c		\
		./printf/my_putchar.c		\
		./printf/my_putstr.c		\
		./printf/my_putnbr_base.c	\
		./printf/my_unsigned_number.c	\
		./printf/my_hexadecimal_base.c	\
		./printf/print_b.c		\
		./printf/print_x.c		\
		./printf/print_hexadecimal.c	\
		./printf/print_o.c		\
		./printf/print_u.c		\
		./printf/print_c.c		\
		./printf/print_d.c		\
		./printf/print_s.c		\
		main.c				\
		help_functions.c		\
		first_file.c			\
		get_numbers.c			\
		to_count.c			\
		get_pid.c			\
		short_function.c		\
		my_strdup.c			\
		get_next_line.c			\
		my_getnbr.c			\
		check_map.c			\
		to_check.c			\
		second_check_map.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -g3 -ggdb -I ./include

NAME	=	navy

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all
