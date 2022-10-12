CC=gcc
CFLAGS=-Wall -Werror -Wextra
CFILES=	do-op.c \
		ft_atoi.c \
		ft_in_array.c \
		ft_putstr.c \
		ft_itoa.c \
		ft_strlen.c

OBJECT = do-op

all: $(OBJECT)

$(OBJECT): $(CFILES)
		$(CC) -c $(CFLAGS) $(CFILES) 
		gcc -o $@ *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(OBJECT)

re: all fclean