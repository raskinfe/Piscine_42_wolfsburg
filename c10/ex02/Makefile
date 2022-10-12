CC=gcc
CFLAGS=-Wall -Werror -Wextra
CFILES=	ft_tail.c \
		ft_print_error.c \
		ft_atoi.c \
		ft_putstr.c \
		ft_strcmp.c \
		ft_strlen.c

OBJECT = ft_tail

all: $(OBJECT)

$(OBJECT): $(CFILES)
		$(CC) -c $(CFLAGS) $(CFILES) 
		gcc -o $@ *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(OBJECT)

re: all fclean