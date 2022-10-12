CC=gcc
CFLAGS=-Wall -Werror -Wextra
CFILES=ft_cat.c

OBJECT = ft_cat

all: $(OBJECT)

$(OBJECT): $(CFILES)
		$(CC) $(CFLAGS) -c $(CFILES)
		gcc -o $(OBJECT) ft_cat.o

clean:
	rm -rf ft_cat.o

fclean: clean
	rm -rf $(OBJECT)

re: all fclean