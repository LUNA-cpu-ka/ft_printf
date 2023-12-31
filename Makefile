CC = cc
SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c \
	ft_putadress.c ft_putnbr_long.c ft_lower.c ft_upper.c \

OBJS = ft_printf.o ft_putchar.o ft_putnbr.o ft_putstr.o \
	ft_putadress.o ft_putnbr_long.o ft_lower.o ft_upper.o \
	
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
