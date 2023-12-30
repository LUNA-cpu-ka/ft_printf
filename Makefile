CC = cc
SRCS = ft_putchar.c ft_putnbr.c
OBJS = ft_putchar.o ft_putnbr.o
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
