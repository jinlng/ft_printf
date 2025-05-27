NAME		= libftprintf.a
SRCS		= ft_printf.c print_char.c print_str.c print_int.c \
			  print_unsigned.c print_hex.c print_ptr.c \
			  print_percent.c ft_itoa_base.c ft_utoa_base.c \
			  print_conversion.c ft_strlen.c
OBJS    = $(SRCS:.c=.o)
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
